
#include <rclcpp/rclcpp.hpp>
#include "dynamixel_workbench_toolbox/dynamixel_workbench.h"
#include "hapthexa_msgs/msg/leg_args.hpp"
#include "hapthexa_msgs/srv/stop_leg.hpp"
#include "hapthexa_msgs/srv/change_current.hpp"
#include <eigen3/Eigen/Geometry>
#include <thread>
#include <chrono>
using namespace std::chrono_literals;

enum leg_num
{
    front_left = 0,
    middle_left,
    rear_left,
    rear_right,
    middle_right,
    front_right,
};

int leg_num2servo_num[6] =
{
    16,
    13,
    10,
    7,
    4,
    1,
};

double leg_angle[6] =
{
    1.5707963267948966,
    0,
    -1.5707963267948966,
    -1.5707963267948966,
    3.141592653589793,
    1.5707963267948966,
};

class HaptHexaServo : public rclcpp::Node
{
public:
    HaptHexaServo() : Node("hapthexa_servo")
    {
        bool result = false;
        uint16_t model_number = 0;
        const char *log;

        // U2D2との通信を確立
        RCLCPP_INFO(this->get_logger(), "Initializing U2D2 and Dynamixels...");
        do {
            if (dxl_wb.init("/dev/ttyUSB0", 4*1000*1000, &log) == true) break;
            RCLCPP_WARN(this->get_logger(), log);
            RCLCPP_WARN(this->get_logger(), "Failed to initialize U2D2 and Dynamixels. retrying...");
            std::this_thread::sleep_for(5s);
        } while (true);
        RCLCPP_INFO(this->get_logger(), "Succeeded to initialize U2D2 and Dynamixels");

        // pingによる全サーボの疎通確認
        RCLCPP_INFO(this->get_logger(), "Checking connection to Dynamixels...");
        do {
            int ping_succeed_count = 0;
            char is_ping_succeed[19] = {};
            for (int id = 1; id <= 18; id++) {
                if (dxl_wb.ping(id, &model_number, &log)) {
                    ++ping_succeed_count;
                    is_ping_succeed[id-1] = 'o';
                } else {
                    is_ping_succeed[id-1] = 'x';
                }
            }
            is_ping_succeed[18] = '\0';
            RCLCPP_INFO(this->get_logger(), "\nping result: [%s]", is_ping_succeed);

            if (ping_succeed_count == 18) break;

            RCLCPP_WARN(this->get_logger(), "Failed to ping. retrying...");
            std::this_thread::sleep_for(5s);
        } while (true);
        RCLCPP_INFO(this->get_logger(), "Succeeded to ping");

        // ジョイントモードの変更
        RCLCPP_INFO(this->get_logger(), "Changing joint mode...");
        do {
            int change_succeed_count = 0;
            char is_change_succeed[19] = {};
            // for (int id = 1; id <= 18; id++) {
            //     if (dxl_wb.jointMode(id, 0, 0, &log)) {
            //         ++change_succeed_count;
            //         is_change_succeed[id-1] = 'o';
            //     } else {
            //         is_change_succeed[id-1] = 'x';
            //     }
            // }
            // is_change_succeed[18] = '\0';
            // RCLCPP_INFO(this->get_logger(), "\nchange joint mode result: [%s]", is_change_succeed);
            for (int id = 1; id <= 18; id++) {
                if (dxl_wb.currentBasedPositionMode(id,400,&log)) {
                    ++change_succeed_count;
                    is_change_succeed[id-1] = 'o';
                } else {
                    is_change_succeed[id-1] = 'x';
                }
            }
            is_change_succeed[18] = '\0';
            RCLCPP_INFO(this->get_logger(), "\nchange joint mode result: [%s]", is_change_succeed);

            if (change_succeed_count == 18) break;

            RCLCPP_WARN(this->get_logger(), "Failed to change joint mode. retrying...");
            std::this_thread::sleep_for(5s);
        } while (true);
        RCLCPP_INFO(this->get_logger(), "Succeeded to change joint mode");
        // 加速度プロファイルの変更
        RCLCPP_INFO(this->get_logger(), "Changing acc mode...");
        do {
            int change_succeed_count = 0;
            char is_change_succeed[19] = {};
            for (int id = 1; id <= 18; id++) {
                if (dxl_wb.writeRegister(id, "Profile_Acceleration", 30,&log)&&dxl_wb.writeRegister(id, "Profile_Velocity", 80,&log)) {
                    ++change_succeed_count;
                    is_change_succeed[id-1] = 'o';
                } else {
                    is_change_succeed[id-1] = 'x';
                }
            }
            is_change_succeed[18] = '\0';
            RCLCPP_INFO(this->get_logger(), "\nchange acc mode result: [%s]", is_change_succeed);

            if (change_succeed_count == 18) break;

            RCLCPP_WARN(this->get_logger(), "Failed to change acc mode. retrying...");
            std::this_thread::sleep_for(5s);
        } while (true);
        RCLCPP_INFO(this->get_logger(), "Succeeded to change acc mode");

        result = dxl_wb.initBulkWrite(&log);
        RCLCPP_INFO(this->get_logger(), "%s", log);

        result = dxl_wb.initBulkRead(&log);
        RCLCPP_INFO(this->get_logger(), "%s", log);
        RCLCPP_INFO(this->get_logger(), "result = %d", result);
        // result = dxl_wb.addBulkReadParam(1, "Present_Position", &log);
        // dxl_wb.addBulkReadParam(dxl_id[0], 0, 0, &log);
        float a[18];
        for (int id = 1; id <= 18; id++) {
            dxl_wb.getRadian(id,&a[id-1],&log);
            RCLCPP_INFO(this->get_logger(), "\n%d:%f",id,a[id-1]);
        }
        for (int id = 1; id <= 18; id++) {
            dxl_wb.goalPosition(id,a[id-1],&log);
            RCLCPP_INFO(this->get_logger(), "\n%d:set%f",id,a[id-1]);
        }
        sub_[front_left] = this->create_subscription<hapthexa_msgs::msg::LegArgs>(
            "hapthexa/leg/front_left/leg_args", rclcpp::QoS(10),
            [&](hapthexa_msgs::msg::LegArgs::SharedPtr msg) {
                const char *log;
                dxl_wb.addBulkWriteParam(16, "Goal_Position", -msg->coxa_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.addBulkWriteParam(17, "Goal_Position", msg->femur_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.addBulkWriteParam(18, "Goal_Position", -msg->tibia_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.bulkWrite(&log);
            });
        sub_[middle_left] = this->create_subscription<hapthexa_msgs::msg::LegArgs>(
            "hapthexa/leg/middle_left/leg_args", rclcpp::QoS(10),
            [&](hapthexa_msgs::msg::LegArgs::SharedPtr msg) {
                const char *log;
                dxl_wb.addBulkWriteParam(13, "Goal_Position", -msg->coxa_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.addBulkWriteParam(14, "Goal_Position", msg->femur_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.addBulkWriteParam(15, "Goal_Position", -msg->tibia_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.bulkWrite(&log);
            });
        sub_[rear_left] = this->create_subscription<hapthexa_msgs::msg::LegArgs>(
            "hapthexa/leg/rear_left/leg_args", rclcpp::QoS(10),
            [&](hapthexa_msgs::msg::LegArgs::SharedPtr msg) {
                const char *log;
                dxl_wb.addBulkWriteParam(10, "Goal_Position", -msg->coxa_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.addBulkWriteParam(11, "Goal_Position", msg->femur_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.addBulkWriteParam(12, "Goal_Position", -msg->tibia_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.bulkWrite(&log);
            });
        sub_[rear_right] = this->create_subscription<hapthexa_msgs::msg::LegArgs>(
            "hapthexa/leg/rear_right/leg_args", rclcpp::QoS(10),
            [&](hapthexa_msgs::msg::LegArgs::SharedPtr msg) {
                const char *log;
                dxl_wb.addBulkWriteParam(7, "Goal_Position", -msg->coxa_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.addBulkWriteParam(8, "Goal_Position", -msg->femur_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.addBulkWriteParam(9, "Goal_Position", msg->tibia_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.bulkWrite(&log);
            });
        sub_[middle_right] = this->create_subscription<hapthexa_msgs::msg::LegArgs>(
            "hapthexa/leg/middle_right/leg_args", rclcpp::QoS(10),
            [&](hapthexa_msgs::msg::LegArgs::SharedPtr msg) {
                const char *log;
                dxl_wb.addBulkWriteParam(4, "Goal_Position", -msg->coxa_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.addBulkWriteParam(5, "Goal_Position", -msg->femur_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.addBulkWriteParam(6, "Goal_Position", msg->tibia_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.bulkWrite(&log);
            });
        sub_[front_right] = this->create_subscription<hapthexa_msgs::msg::LegArgs>(
            "hapthexa/leg/front_right/leg_args", rclcpp::QoS(10),
            [&](hapthexa_msgs::msg::LegArgs::SharedPtr msg) {
                const char *log;
                dxl_wb.addBulkWriteParam(1, "Goal_Position", -msg->coxa_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.addBulkWriteParam(2, "Goal_Position", -msg->femur_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.addBulkWriteParam(3, "Goal_Position", msg->tibia_arg * (2048 / M_PI) + 2048, &log);
                dxl_wb.bulkWrite(&log);
            });
        
        server_stop = this->create_service<hapthexa_msgs::srv::StopLeg>(
            "hapthexa/leg/stop",
            [&](std::shared_ptr<hapthexa_msgs::srv::StopLeg::Request> req,std::shared_ptr<hapthexa_msgs::srv::StopLeg::Response> res) {
                const char *log;
                float rad[3];
                dxl_wb.getRadian(leg_num2servo_num[req->num],&rad[0],&log);
                dxl_wb.getRadian(leg_num2servo_num[req->num]+1,&rad[1],&log);
                dxl_wb.getRadian(leg_num2servo_num[req->num]+2,&rad[2],&log);
                dxl_wb.goalPosition(leg_num2servo_num[req->num],rad[0],&log);
                dxl_wb.goalPosition(leg_num2servo_num[req->num]+1,rad[1],&log);
                dxl_wb.goalPosition(leg_num2servo_num[req->num]+2,rad[2],&log);
                rad[0] += leg_angle[req->num];
                if(req->num > 2){
                    rad[1] *= -1;
                    rad[2] *= -1;
                }
                Eigen::Vector3d ret;
                Eigen::Matrix3d rot;
                double l1 = 4.5, l2 = 10.0, l3 = 15.0;
                double r = l1 + l2 * cos(rad[1]) + l3 * cos(rad[2] - rad[1]);
                Eigen::Vector3d xyz(r * sin(rad[0]), r * cos(rad[0]), l2 * sin(rad[1]) - l3 * sin(rad[2] - rad[1]));
                res->x = xyz.x();
                res->y = xyz.y();
                res->z = xyz.z();
                RCLCPP_INFO(this->get_logger(), "%d\n", req->num);
                RCLCPP_INFO(this->get_logger(), "%f\n", rad[0]);
                RCLCPP_INFO(this->get_logger(), "%f\n", rad[1]);
                RCLCPP_INFO(this->get_logger(), "%f\n", rad[2]);
                RCLCPP_INFO(this->get_logger(), "%f\n", xyz.x());
                RCLCPP_INFO(this->get_logger(), "%f\n", xyz.y());
                RCLCPP_INFO(this->get_logger(), "%f\n", xyz.z());
            });

        server_current = this->create_service<hapthexa_msgs::srv::ChangeCurrent>(
            "hapthexa/leg/change_current",
            [&](std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent::Request> req,std::shared_ptr<hapthexa_msgs::srv::ChangeCurrent::Response> res) {
                const char *log;
                RCLCPP_INFO(this->get_logger(), "%d\n", dxl_wb.writeRegister(leg_num2servo_num[req->num], "Goal_Current", req->current_coxa,&log));
                RCLCPP_INFO(this->get_logger(), "%d\n", dxl_wb.writeRegister(leg_num2servo_num[req->num]+1, "Goal_Current", req->current_femur,&log));
                RCLCPP_INFO(this->get_logger(), "%d\n", dxl_wb.writeRegister(leg_num2servo_num[req->num]+2, "Goal_Current", req->current_tibia,&log));
            });

        for (int i = 0; i < 6; i++)
        {
            present_leg_args_pubs[i] = this->create_publisher<hapthexa_msgs::msg::LegArgs>("hapthexa/leg/" + leg_names[i] + "/present_leg_args", rclcpp::QoS(10));
        }
        timer_ = this->create_wall_timer(10ms, [&]() {
            const char *log;
            for (uint8_t id = 1; id <= 18; id++)
            {
                dxl_wb.addBulkReadParam(id, "Present_Position", &log);
            }
            dxl_wb.bulkRead(&log);
            int32_t position[18];
            dxl_wb.getBulkReadData(position, &log);

            for (int i = 0; i < 6; i++)
            {
                auto leg_args = hapthexa_msgs::msg::LegArgs();
                for (int j = 0; j < 3; j++)
                {
                    int legnum = 5 - i;
                    int angle = position[legnum*3+j] - 2048;
                    if (j == 0) angle *= -1;
                    if (legnum <= 2)
                    {
                        if (j == 1)
                            angle *= -1;
                    }
                    else
                    {
                        if (j == 2)
                            angle *= -1;
                    }

                    double arg = angle * (M_PI/2048.0);
                    switch (j)
                    {
                    case 0:
                        leg_args.coxa_arg = arg;
                        break;
                    case 1:
                        leg_args.femur_arg = arg;
                        break;
                    case 2:
                        leg_args.tibia_arg = arg;
                        break;
                    }
                }
                present_leg_args_pubs[i]->publish(leg_args);
            }
        });
    }

private:
    DynamixelWorkbench dxl_wb;
    std::array<rclcpp::Subscription<hapthexa_msgs::msg::LegArgs>::SharedPtr, 6> sub_;
    rclcpp::Service<hapthexa_msgs::srv::StopLeg>::SharedPtr server_stop;
    rclcpp::Service<hapthexa_msgs::srv::ChangeCurrent>::SharedPtr server_current;
    std::array<std::string, 6> leg_names = {"front_left", "middle_left", "rear_left", "rear_right", "middle_right", "front_right"};
    std::array<rclcpp::Publisher<hapthexa_msgs::msg::LegArgs>::SharedPtr, 6> present_leg_args_pubs;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<HaptHexaServo>());
    rclcpp::shutdown();
    return 0;
}
