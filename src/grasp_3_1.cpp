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
    sleep(1);

    int seq = 4;

    
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":29.799999,\"angle1\":-7.200000,\"angle2\":18.500000,\"angle3\":1.800000,\"angle4\":8.900000,\"angle5\":-1.900000,\"angle6\":40.799999}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":62.099998,\"angle1\":10.500000,\"angle2\":-7.800000,\"angle3\":-0.400000,\"angle4\":18.500000,\"angle5\":8.000000,\"angle6\":41.000000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":79.800003,\"angle1\":40.000000,\"angle2\":-31.000000,\"angle3\":1.800000,\"angle4\":24.900000,\"angle5\":8.100000,\"angle6\":40.900002}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":83.000000,\"angle1\":58.200001,\"angle2\":-49.599998,\"angle3\":2.300000,\"angle4\":31.900000,\"angle5\":8.100000,\"angle6\":40.900002}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":83.300003,\"angle1\":59.900002,\"angle2\":-49.599998,\"angle3\":4.800000,\"angle4\":35.400002,\"angle5\":5.900000,\"angle6\":20.500000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":82.099998,\"angle1\":60.000000,\"angle2\":-49.500000,\"angle3\":13.000000,\"angle4\":31.299999,\"angle5\":-5.800000,\"angle6\":-37}");
    sleep(3);
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":81.900002,\"angle1\":48.400002,\"angle2\":-49.599998,\"angle3\":-1.500000,\"angle4\":37.799999,\"angle5\":-5.000000,\"angle6\":-37}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":76.000000,\"angle1\":12.000000,\"angle2\":-49.200001,\"angle3\":-14.800000,\"angle4\":78.900002,\"angle5\":-2.400000,\"angle6\":-37}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":22.799999,\"angle1\":33.400002,\"angle2\":-49.400002,\"angle3\":-1.100000,\"angle4\":73.099998,\"angle5\":-14.700000,\"angle6\":-37}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":21.700001,\"angle1\":66.199997,\"angle2\":-49.299999,\"angle3\":20.700001,\"angle4\":75.300003,\"angle5\":-71.400002,\"angle6\":-37}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":33.900002,\"angle1\":89.000000,\"angle2\":-49.599998,\"angle3\":46.099998,\"angle4\":73.099998,\"angle5\":-140.199997,\"angle6\":-37}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":49.799999,\"angle1\":100.699997,\"angle2\":-49.299999,\"angle3\":77.199997,\"angle4\":63.400002,\"angle5\":-151.899994,\"angle6\":-37}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":59.900002,\"angle1\":100.699997,\"angle2\":-49.299999,\"angle3\":83.500000,\"angle4\":50.299999,\"angle5\":-152.399994,\"angle6\":-37}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":62.299999,\"angle1\":100.699997,\"angle2\":-49.400002,\"angle3\":82.500000,\"angle4\":52.799999,\"angle5\":-119.099998,\"angle6\":-37}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":52.900002,\"angle1\":100.500000,\"angle2\":-49.400002,\"angle3\":75.300003,\"angle4\":65.900002,\"angle5\":-98.099998,\"angle6\":21.600000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":33.599998,\"angle1\":87.199997,\"angle2\":-49.299999,\"angle3\":54.099998,\"angle4\":80.599998,\"angle5\":-95.500000,\"angle6\":21.600000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":16.299999,\"angle1\":46.799999,\"angle2\":-49.400002,\"angle3\":34.700001,\"angle4\":82.400002,\"angle5\":-95.300003,\"angle6\":21.600000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":17.000000,\"angle1\":15.800000,\"angle2\":-49.400002,\"angle3\":7.900000,\"angle4\":94.800003,\"angle5\":-94.800003,\"angle6\":21.600000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":7.800000,\"angle1\":12.800000,\"angle2\":-43.299999,\"angle3\":-6.500000,\"angle4\":48.000000,\"angle5\":1.500000,\"angle6\":21.200001}");
}