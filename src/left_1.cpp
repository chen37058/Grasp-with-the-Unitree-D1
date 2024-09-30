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

extern "C" void Left_1() {
    ChannelFactory::Instance()->Init(0);
    ChannelPublisher<unitree_arm::msg::dds_::ArmString_> publisher(TOPIC);
    publisher.InitChannel();

    // 零位
    unitree_arm::msg::dds_::ArmString_ msg{};
    msg.data_() = "{\"seq\":4,\"address\":1,\"funcode\":7}";
    publisher.Write(msg);
    sleep(1);

    int seq = 4;
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":1.100000,\"angle1\":-2.700000,\"angle2\":8.000000,\"angle3\":1.100000,\"angle4\":0.400000,\"angle5\":-4.300000,\"angle6\":0.200000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":1.100000,\"angle1\":-2.700000,\"angle2\":7.900000,\"angle3\":-1.400000,\"angle4\":3.200000,\"angle5\":-51.400002,\"angle6\":-1.100000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":1.200000,\"angle1\":-2.800000,\"angle2\":7.900000,\"angle3\":0.600000,\"angle4\":3.800000,\"angle5\":-79.000000,\"angle6\":-1.200000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":6.900000,\"angle1\":-21.299999,\"angle2\":8.300000,\"angle3\":0.600000,\"angle4\":16.600000,\"angle5\":-79.000000,\"angle6\":-1.300000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":36.099998,\"angle1\":-21.299999,\"angle2\":8.300000,\"angle3\":-37.299999,\"angle4\":16.799999,\"angle5\":-78.900002,\"angle6\":-1.800000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":51.700001,\"angle1\":-26.400000,\"angle2\":18.700001,\"angle3\":-63.500000,\"angle4\":14.500000,\"angle5\":-70.300003,\"angle6\":8.100000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":68.199997,\"angle1\":-20.900000,\"angle2\":18.799999,\"angle3\":-84.800003,\"angle4\":15.900000,\"angle5\":-73.900002,\"angle6\":26.299999}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":71.099998,\"angle1\":-13.500000,\"angle2\":18.500000,\"angle3\":-88.500000,\"angle4\":16.799999,\"angle5\":-74.300003,\"angle6\":34.500000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":75.800003,\"angle1\":0.100000,\"angle2\":10.200000,\"angle3\":-87.800003,\"angle4\":27.299999,\"angle5\":-74.500000,\"angle6\":34.500000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":78.800003,\"angle1\":12.400000,\"angle2\":0.100000,\"angle3\":-86.300003,\"angle4\":41.500000,\"angle5\":-74.500000,\"angle6\":34.500000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":78.800003,\"angle1\":15.200000,\"angle2\":0.100000,\"angle3\":-86.800003,\"angle4\":46.299999,\"angle5\":-74.599998,\"angle6\":35.000000}");
    
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":15.600000,\"angle1\":-6.600000,\"angle2\":11.300000,\"angle3\":-6.500000,\"angle4\":3.300000,\"angle5\":14.600000,\"angle6\":56.200001}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":34.500000,\"angle1\":-10.800000,\"angle2\":11.300000,\"angle3\":-34.400002,\"angle4\":9.300000,\"angle5\":47.000000,\"angle6\":56.200001}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":66.400002,\"angle1\":-15.500000,\"angle2\":11.300000,\"angle3\":-61.500000,\"angle4\":34.400002,\"angle5\":71.900002,\"angle6\":56.200001}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":82.400002,\"angle1\":-8.100000,\"angle2\":11.100000,\"angle3\":-79.000000,\"angle4\":45.700001,\"angle5\":90.699997,\"angle6\":56.200001}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":82.000000,\"angle1\":4.200000,\"angle2\":4.700000,\"angle3\":-80.599998,\"angle4\":48.799999,\"angle5\":97.099998,\"angle6\":56.299999}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":81.800003,\"angle1\":13.400000,\"angle2\":-2.100000,\"angle3\":-81.500000,\"angle4\":59.000000,\"angle5\":99.900002,\"angle6\":56.299999}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":80.699997,\"angle1\":15.100000,\"angle2\":-2.100000,\"angle3\":-82.300003,\"angle4\":60.599998,\"angle5\":99.599998,\"angle6\":56.299999}");



}