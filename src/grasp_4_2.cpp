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
    unitree_arm::msg::dds_::ArmString_ msg{};
    int seq = 4;
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":100.300003,\"angle1\":24.100000,\"angle2\":-8.100000,\"angle3\":9.100000,\"angle4\":4.200000,\"angle5\":-0.100000,\"angle6\":-6}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":94.500000,\"angle1\":-10.400000,\"angle2\":-8.000000,\"angle3\":-18.400000,\"angle4\":35.200001,\"angle5\":19.200001,\"angle6\":-6}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":58.400002,\"angle1\":-49.400002,\"angle2\":38.700001,\"angle3\":-16.400000,\"angle4\":36.099998,\"angle5\":19.200001,\"angle6\":-6}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":52.900002,\"angle1\":-14.700000,\"angle2\":60.900002,\"angle3\":-11.900000,\"angle4\":1.000000,\"angle5\":25.100000,\"angle6\":-6}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":54.400002,\"angle1\":31.500000,\"angle2\":62.200001,\"angle3\":-5.600000,\"angle4\":-47.200001,\"angle5\":8.500000,\"angle6\":-6}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":65.699997,\"angle1\":65.699997,\"angle2\":47.900002,\"angle3\":-0.300000,\"angle4\":-76.099998,\"angle5\":-7.200000,\"angle6\":-6}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":76.800003,\"angle1\":88.900002,\"angle2\":16.000000,\"angle3\":4.000000,\"angle4\":-70.500000,\"angle5\":-7.300000,\"angle6\":-6}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":78.800003,\"angle1\":100.000000,\"angle2\":-1.700000,\"angle3\":3.200000,\"angle4\":-58.000000,\"angle5\":8.700000,\"angle6\":-6}");

    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":100.300003,\"angle1\":24.100000,\"angle2\":-8.100000,\"angle3\":9.100000,\"angle4\":4.200000,\"angle5\":-0.100000,\"angle6\":-15}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":94.500000,\"angle1\":-10.400000,\"angle2\":-8.000000,\"angle3\":-18.400000,\"angle4\":35.200001,\"angle5\":19.200001,\"angle6\":-15}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":58.400002,\"angle1\":-49.400002,\"angle2\":38.700001,\"angle3\":-16.400000,\"angle4\":36.099998,\"angle5\":19.200001,\"angle6\":-15}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":52.900002,\"angle1\":-14.700000,\"angle2\":60.900002,\"angle3\":-11.900000,\"angle4\":1.000000,\"angle5\":25.100000,\"angle6\":-15}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":54.400002,\"angle1\":31.500000,\"angle2\":62.200001,\"angle3\":-5.600000,\"angle4\":-47.200001,\"angle5\":8.500000,\"angle6\":-15}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":65.699997,\"angle1\":65.699997,\"angle2\":47.900002,\"angle3\":-0.300000,\"angle4\":-76.099998,\"angle5\":-7.200000,\"angle6\":-15}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":76.800003,\"angle1\":88.900002,\"angle2\":16.000000,\"angle3\":4.000000,\"angle4\":-70.500000,\"angle5\":-7.300000,\"angle6\":-15}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":78.800003,\"angle1\":100.000000,\"angle2\":-1.700000,\"angle3\":3.200000,\"angle4\":-58.000000,\"angle5\":8.700000,\"angle6\":-15}");


    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":80.099998,\"angle1\":100.199997,\"angle2\":-9.300000,\"angle3\":4.000000,\"angle4\":-61.099998,\"angle5\":5.000000,\"angle6\":27.500000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":77.000000,\"angle1\":70.900002,\"angle2\":28.700001,\"angle3\":4.000000,\"angle4\":-50.900002,\"angle5\":9.300000,\"angle6\":27.799999}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":61.799999,\"angle1\":12.000000,\"angle2\":66.099998,\"angle3\":-4.600000,\"angle4\":-25.100000,\"angle5\":10.800000,\"angle6\":28.000000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":11.600000,\"angle1\":-26.900000,\"angle2\":37.200001,\"angle3\":-8.500000,\"angle4\":12.200000,\"angle5\":11.700000,\"angle6\":28.000000}");

}