#include <unitree/robot/channel/channel_publisher.hpp>
#include <unitree/common/time/time_tool.hpp>
#include "msg/ArmString_.hpp"

#define TOPIC "rt/arm_Command"

using namespace unitree::robot;
using namespace unitree::common;

void sendArmCommand(ChannelPublisher<unitree_arm::msg::dds_::ArmString_> &publisher, int seq, int funcode, std::string data) {
    unitree_arm::msg::dds_::ArmString_ msg{};
    msg.data_() = "{\"seq\":" + std::to_string(seq) + ",\"address\":1,\"funcode\":" + std::to_string(funcode) + ",\"data\":" + data + "}";
    publisher.Write(msg);
    sleep(1);
}

extern "C" void Right_2() {
    ChannelFactory::Instance()->Init(0);
    ChannelPublisher<unitree_arm::msg::dds_::ArmString_> publisher(TOPIC);
    publisher.InitChannel();

    
    int seq = 4;
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":57.400002,\"angle1\":54.500000,\"angle2\":-79.699997,\"angle3\":-137.100006,\"angle4\":-39.099998,\"angle5\":-21.400000,\"angle6\":0.300000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":44.400002,\"angle1\":46.099998,\"angle2\":-79.800003,\"angle3\":-117.800003,\"angle4\":-65.000000,\"angle5\":-23.200001,\"angle6\":0.300000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":22.799999,\"angle1\":39.599998,\"angle2\":-79.800003,\"angle3\":-83.900002,\"angle4\":-86.800003,\"angle5\":-23.299999,\"angle6\":0.300000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":8.300000,\"angle1\":42.500000,\"angle2\":-94.500000,\"angle3\":-43.799999,\"angle4\":-93.900002,\"angle5\":-23.100000,\"angle6\":0.300000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":4.400000,\"angle1\":31.700001,\"angle2\":-94.599998,\"angle3\":-16.200001,\"angle4\":-93.699997,\"angle5\":-22.700001,\"angle6\":0.300000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":4.300000,\"angle1\":14.200000,\"angle2\":-94.400002,\"angle3\":3.200000,\"angle4\":-88.699997,\"angle5\":-9.500000,\"angle6\":0.300000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":4.400000,\"angle1\":0.900000,\"angle2\":-92.300003,\"angle3\":4.800000,\"angle4\":-76.199997,\"angle5\":-8.700000,\"angle6\":0.300000}");

    
}