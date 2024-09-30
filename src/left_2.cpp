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

extern "C" void Left_2() {
    ChannelFactory::Instance()->Init(0);
    ChannelPublisher<unitree_arm::msg::dds_::ArmString_> publisher(TOPIC);
    publisher.InitChannel();

    // 零位
    unitree_arm::msg::dds_::ArmString_ msg{};

    int seq = 4;
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":78.800003,\"angle1\":15.200000,\"angle2\":0.100000,\"angle3\":-86.800003,\"angle4\":46.299999,\"angle5\":-74.599998,\"angle6\":35.000000}");

    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":76.099998,\"angle1\":7.500000,\"angle2\":0.500000,\"angle3\":-79.400002,\"angle4\":43.700001,\"angle5\":-86.199997,\"angle6\":35.900002}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":66.599998,\"angle1\":0.000000,\"angle2\":0.500000,\"angle3\":-56.900002,\"angle4\":38.299999,\"angle5\":-113.199997,\"angle6\":37.700001}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":61.900002,\"angle1\":-10.900000,\"angle2\":10.500000,\"angle3\":-51.799999,\"angle4\":26.700001,\"angle5\":-115.400002,\"angle6\":37.700001}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":62.700001,\"angle1\":-24.600000,\"angle2\":10.500000,\"angle3\":-34.500000,\"angle4\":24.200001,\"angle5\":-114.000000,\"angle6\":37.599998}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":62.599998,\"angle1\":-21.299999,\"angle2\":10.500000,\"angle3\":13.300000,\"angle4\":24.799999,\"angle5\":-106.500000,\"angle6\":37.599998}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":63.299999,\"angle1\":-8.500000,\"angle2\":10.200000,\"angle3\":5.700000,\"angle4\":17.299999,\"angle5\":-94.400002,\"angle6\":37.599998}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":49.000000,\"angle1\":-14.700000,\"angle2\":10.400000,\"angle3\":-6.100000,\"angle4\":24.600000,\"angle5\":-87.900002,\"angle6\":37.599998}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":21.700001,\"angle1\":-14.800000,\"angle2\":10.300000,\"angle3\":-9.400000,\"angle4\":24.100000,\"angle5\":-87.900002,\"angle6\":37.599998}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":7.100000,\"angle1\":4.600000,\"angle2\":-0.400000,\"angle3\":-7.800000,\"angle4\":10.600000,\"angle5\":-88.099998,\"angle6\":37.599998}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-0.700000,\"angle1\":28.700001,\"angle2\":-20.500000,\"angle3\":-4.800000,\"angle4\":8.000000,\"angle5\":-95.800003,\"angle6\":37.599998}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-1.200000,\"angle1\":54.099998,\"angle2\":-50.000000,\"angle3\":-3.600000,\"angle4\":5.900000,\"angle5\":-101.699997,\"angle6\":37.599998}");

    
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":80.699997,\"angle1\":15.800000,\"angle2\":1.100000,\"angle3\":-85.000000,\"angle4\":58.000000,\"angle5\":99.300003,\"angle6\":56.000000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":79.000000,\"angle1\":7.800000,\"angle2\":1.400000,\"angle3\":-83.900002,\"angle4\":62.200001,\"angle5\":92.099998,\"angle6\":56.099998}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":93.900002,\"angle1\":-2.700000,\"angle2\":1.300000,\"angle3\":-88.800003,\"angle4\":78.599998,\"angle5\":90.500000,\"angle6\":56.099998}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":103.000000,\"angle1\":-2.500000,\"angle2\":1.400000,\"angle3\":-140.300003,\"angle4\":84.099998,\"angle5\":87.699997,\"angle6\":56.099998}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":97.400002,\"angle1\":-2.600000,\"angle2\":1.300000,\"angle3\":-158.899994,\"angle4\":60.400002,\"angle5\":69.500000,\"angle6\":56.099998}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":76.099998,\"angle1\":1.500000,\"angle2\":1.400000,\"angle3\":-141.300003,\"angle4\":36.799999,\"angle5\":49.299999,\"angle6\":56.099998}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":72.300003,\"angle1\":1.900000,\"angle2\":13.300000,\"angle3\":-129.699997,\"angle4\":26.700001,\"angle5\":36.599998,\"angle6\":56.099998}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":58.200001,\"angle1\":-0.900000,\"angle2\":13.300000,\"angle3\":-125.099998,\"angle4\":26.500000,\"angle5\":36.599998,\"angle6\":56.099998}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":34.700001,\"angle1\":-1.800000,\"angle2\":13.300000,\"angle3\":-122.199997,\"angle4\":23.700001,\"angle5\":37.799999,\"angle6\":56.099998}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":14.400000,\"angle1\":1.200000,\"angle2\":13.300000,\"angle3\":-124.500000,\"angle4\":15.900000,\"angle5\":40.299999,\"angle6\":56.099998}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":2.500000,\"angle1\":35.900002,\"angle2\":-21.299999,\"angle3\":-129.000000,\"angle4\":7.700000,\"angle5\":40.299999,\"angle6\":56.099998}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":0.400000,\"angle1\":61.099998,\"angle2\":-56.200001,\"angle3\":-127.900002,\"angle4\":-2.600000,\"angle5\":39.799999,\"angle6\":56.000000}");

}