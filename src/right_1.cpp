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

extern "C" void Right_1() {
    ChannelFactory::Instance()->Init(0);
    ChannelPublisher<unitree_arm::msg::dds_::ArmString_> publisher(TOPIC);
    publisher.InitChannel();

    // 零位
    unitree_arm::msg::dds_::ArmString_ msg{};
    msg.data_() = "{\"seq\":4,\"address\":1,\"funcode\":7}";
    publisher.Write(msg);
    sleep(1);

    int seq = 4;
    
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-1.700000,\"angle1\":12.000000,\"angle2\":-0.100000,\"angle3\":-37.299999,\"angle4\":-8.100000,\"angle5\":-2.700000,\"angle6\":0.300000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":2.100000,\"angle1\":27.200001,\"angle2\":-28.500000,\"angle3\":-56.500000,\"angle4\":-8.100000,\"angle5\":-2.900000,\"angle6\":0.300000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":18.799999,\"angle1\":46.400002,\"angle2\":-71.900002,\"angle3\":-93.000000,\"angle4\":-27.700001,\"angle5\":-14.600000,\"angle6\":0.300000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":48.000000,\"angle1\":54.500000,\"angle2\":-79.699997,\"angle3\":-131.899994,\"angle4\":-27.700001,\"angle5\":-21.200001,\"angle6\":0.300000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":57.400002,\"angle1\":54.500000,\"angle2\":-79.699997,\"angle3\":-137.100006,\"angle4\":-39.099998,\"angle5\":-21.400000,\"angle6\":0.300000}");
}