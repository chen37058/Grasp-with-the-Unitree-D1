#include <unitree/robot/channel/channel_subscriber.hpp>
#include <unitree/common/time/time_tool.hpp>
#include "msg/PubServoInfo_.hpp"
#include "msg/ArmString_.hpp"
#include <iostream>
#include <fstream>
#include <thread>
#include <atomic>

#define TOPIC "current_servo_angle"
#define TOPIC1 "arm_Feedback"

using namespace unitree::robot;
using namespace unitree::common;

std::ofstream outputFile("servo_commands.txt", std::ios::app); // Open file in append mode
std::atomic<bool> recordOnce(false); // Use atomic for thread safety

void Handler(const void* msg)
{
    const unitree_arm::msg::dds_::PubServoInfo_* pm = (const unitree_arm::msg::dds_::PubServoInfo_*)msg;

    std::string command = "sendArmCommand(publisher, seq, 2, \"{\\\"mode\\\":1,\\\"angle0\\\":" 
                          + std::to_string(pm->servo0_data_()) + ",\\\"angle1\\\":" 
                          + std::to_string(pm->servo1_data_()) + ",\\\"angle2\\\":" 
                          + std::to_string(pm->servo2_data_()) + ",\\\"angle3\\\":" 
                          + std::to_string(pm->servo3_data_()) + ",\\\"angle4\\\":" 
                          + std::to_string(pm->servo4_data_()) + ",\\\"angle5\\\":" 
                          + std::to_string(pm->servo5_data_()) + ",\\\"angle6\\\":" 
                          + std::to_string(pm->servo6_data_()) + "}\");";

    std::cout << command << std::endl;

    // Save command to file if recording is enabled
    if (recordOnce.load()) {
        outputFile << command << std::endl;
        recordOnce = false; // Reset for next input
    }
}

void Handler1(const void* msg)
{
    const unitree_arm::msg::dds_::ArmString_* pm = (const unitree_arm::msg::dds_::ArmString_*)msg;

    std::cout << "armFeedback_data:" << pm->data_() << std::endl;
}

void InputThread() {
    while (true) {
        char input;
        std::cin >> input; // Wait for user input
        if (input == 'r') {
            recordOnce = true; // Enable single recording
            std::cout << "Ready to record next command." << std::endl;
        }
    }
}

int main()
{
    ChannelFactory::Instance()->Init(0);
    ChannelSubscriber<unitree_arm::msg::dds_::PubServoInfo_> subscriber(TOPIC);
    subscriber.InitChannel(Handler);

    ChannelSubscriber<unitree_arm::msg::dds_::ArmString_> subscriber1(TOPIC1);
    subscriber1.InitChannel(Handler1);

    std::thread inputThread(InputThread); // Start input thread

    while (true)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    outputFile.close(); // Close the file before exiting
    inputThread.join(); // Wait for input thread to finish
    return 0;
}
