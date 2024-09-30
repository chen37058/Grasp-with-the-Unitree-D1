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
    sleep(4);
}
// 一字
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
    
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":30.900000,\"angle1\":17.600000,\"angle2\":-2.300000,\"angle3\":0.900000,\"angle4\":-0.600000,\"angle5\":10.300000,\"angle6\":19.299999}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":49.299999,\"angle1\":32.500000,\"angle2\":-2.300000,\"angle3\":-41.400002,\"angle4\":-18.900000,\"angle5\":45.400002,\"angle6\":19.299999}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":57.099998,\"angle1\":47.500000,\"angle2\":-8.200000,\"angle3\":-57.799999,\"angle4\":-29.200001,\"angle5\":57.500000,\"angle6\":19.299999}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":58.900002,\"angle1\":53.700001,\"angle2\":-12.900000,\"angle3\":-62.400002,\"angle4\":-29.100000,\"angle5\":58.500000,\"angle6\":19.200001}");

    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":58.400002,\"angle1\":53.799999,\"angle2\":-12.900000,\"angle3\":-65.400002,\"angle4\":-32.000000,\"angle5\":57.700001,\"angle6\":-18}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":47.000000,\"angle1\":18.200001,\"angle2\":3.600000,\"angle3\":-74.699997,\"angle4\":-31.400000,\"angle5\":66.800003,\"angle6\":-18}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":38.200001,\"angle1\":-4.200000,\"angle2\":5.400000,\"angle3\":-71.199997,\"angle4\":-32.200001,\"angle5\":71.400002,\"angle6\":-18}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":8.800000,\"angle1\":-35.099998,\"angle2\":35.599998,\"angle3\":-76.300003,\"angle4\":-30.700001,\"angle5\":88.300003,\"angle6\":-18}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":9.700000,\"angle1\":-20.700001,\"angle2\":64.199997,\"angle3\":-76.400002,\"angle4\":-35.200001,\"angle5\":63.400002,\"angle6\":-18}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":31.600000,\"angle1\":38.700001,\"angle2\":63.900002,\"angle3\":-25.500000,\"angle4\":-64.699997,\"angle5\":3.900000,\"angle6\":-18}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":48.000000,\"angle1\":71.199997,\"angle2\":44.900002,\"angle3\":-27.600000,\"angle4\":-83.800003,\"angle5\":-6.700000,\"angle6\":-18}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":62.900002,\"angle1\":97.099998,\"angle2\":11.100000,\"angle3\":-19.500000,\"angle4\":-81.800003,\"angle5\":-0.300000,\"angle6\":-18}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":70.099998,\"angle1\":100.800003,\"angle2\":-1.200000,\"angle3\":-11.900000,\"angle4\":-63.599998,\"angle5\":8.200000,\"angle6\":-18}");

    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":58.400002,\"angle1\":53.799999,\"angle2\":-12.900000,\"angle3\":-65.400002,\"angle4\":-32.000000,\"angle5\":57.700001,\"angle6\":-9}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":47.000000,\"angle1\":18.200001,\"angle2\":3.600000,\"angle3\":-74.699997,\"angle4\":-31.400000,\"angle5\":66.800003,\"angle6\":-9}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":38.200001,\"angle1\":-4.200000,\"angle2\":5.400000,\"angle3\":-71.199997,\"angle4\":-32.200001,\"angle5\":71.400002,\"angle6\":-9}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":8.800000,\"angle1\":-35.099998,\"angle2\":35.599998,\"angle3\":-76.300003,\"angle4\":-30.700001,\"angle5\":88.300003,\"angle6\":-9}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":9.700000,\"angle1\":-20.700001,\"angle2\":64.199997,\"angle3\":-76.400002,\"angle4\":-35.200001,\"angle5\":63.400002,\"angle6\":-9}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":31.600000,\"angle1\":38.700001,\"angle2\":63.900002,\"angle3\":-25.500000,\"angle4\":-64.699997,\"angle5\":3.900000,\"angle6\":-9}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":48.000000,\"angle1\":71.199997,\"angle2\":44.900002,\"angle3\":-27.600000,\"angle4\":-83.800003,\"angle5\":-6.700000,\"angle6\":-9}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":62.900002,\"angle1\":97.099998,\"angle2\":11.100000,\"angle3\":-19.500000,\"angle4\":-81.800003,\"angle5\":-0.300000,\"angle6\":-9}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":70.099998,\"angle1\":100.800003,\"angle2\":-1.200000,\"angle3\":-11.900000,\"angle4\":-63.599998,\"angle5\":8.200000,\"angle6\":-9}");

    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":69.400002,\"angle1\":101.300003,\"angle2\":-3.600000,\"angle3\":-14.500000,\"angle4\":-65.400002,\"angle5\":10.700000,\"angle6\":15.400000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":44.299999,\"angle1\":67.699997,\"angle2\":40.299999,\"angle3\":-33.799999,\"angle4\":-75.199997,\"angle5\":7.700000,\"angle6\":15.400000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":3.200000,\"angle1\":20.000000,\"angle2\":52.700001,\"angle3\":-45.299999,\"angle4\":-75.800003,\"angle5\":10.400000,\"angle6\":15.400000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":2.800000,\"angle1\":-17.700001,\"angle2\":34.500000,\"angle3\":-8.000000,\"angle4\":-15.800000,\"angle5\":20.600000,\"angle6\":15.400000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":2.700000,\"angle1\":-33.599998,\"angle2\":42.799999,\"angle3\":-9.000000,\"angle4\":1.100000,\"angle5\":20.799999,\"angle6\":15.400000}");

}