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
    sleep(2);
}

extern "C" void Grasp(int Tool_id) {
    ChannelFactory::Instance()->Init(0);
    ChannelPublisher<unitree_arm::msg::dds_::ArmString_> publisher(TOPIC);
    publisher.InitChannel();

    // 零位
    unitree_arm::msg::dds_::ArmString_ msg{};
    msg.data_() = "{\"seq\":4,\"address\":1,\"funcode\":7}";
    publisher.Write(msg);
    sleep(2);

    int seq = 4;
    
    
    
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":38.799999,\"angle1\":-0.900000,\"angle2\":16.299999,\"angle3\":10.900000,\"angle4\":-18.600000,\"angle5\":-15.000000,\"angle6\":25.299999}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":82.699997,\"angle1\":-0.600000,\"angle2\":16.200001,\"angle3\":10.000000,\"angle4\":-16.100000,\"angle5\":-14.200000,\"angle6\":18.500000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":99.900002,\"angle1\":33.500000,\"angle2\":-3.000000,\"angle3\":17.799999,\"angle4\":-3.000000,\"angle5\":-12.600000,\"angle6\":14.200000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":101.500000,\"angle1\":44.299999,\"angle2\":-8.200000,\"angle3\":22.900000,\"angle4\":-5.200000,\"angle5\":-12.600000,\"angle6\":1.900000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":101.300003,\"angle1\":43.799999,\"angle2\":-8.200000,\"angle3\":21.400000,\"angle4\":1.200000,\"angle5\":-12.000000,\"angle6\":1.900000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":101.199997,\"angle1\":43.799999,\"angle2\":-8.200000,\"angle3\":21.600000,\"angle4\":1.700000,\"angle5\":-12.100000,\"angle6\":-6}");

    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":101.500000,\"angle1\":44.299999,\"angle2\":-8.200000,\"angle3\":22.900000,\"angle4\":-5.200000,\"angle5\":-12.600000,\"angle6\":0}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":101.300003,\"angle1\":43.799999,\"angle2\":-8.200000,\"angle3\":21.400000,\"angle4\":1.200000,\"angle5\":-12.000000,\"angle6\":0}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":101.199997,\"angle1\":43.799999,\"angle2\":-8.200000,\"angle3\":21.600000,\"angle4\":1.700000,\"angle5\":-12.100000,\"angle6\":-15}");
}