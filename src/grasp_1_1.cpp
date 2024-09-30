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
// 剪刀
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
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":20.000000,\"angle1\":25.400000,\"angle2\":-24.000000,\"angle3\":9.000000,\"angle4\":16.500000,\"angle5\":-7.400000,\"angle6\":45.400002}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":36.200001,\"angle1\":45.700001,\"angle2\":-46.400002,\"angle3\":29.900000,\"angle4\":26.900000,\"angle5\":-29.600000,\"angle6\":45.400002}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":42.400002,\"angle1\":61.000000,\"angle2\":-46.400002,\"angle3\":61.900002,\"angle4\":34.500000,\"angle5\":-69.599998,\"angle6\":45.400002}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":47.799999,\"angle1\":75.199997,\"angle2\":-60.000000,\"angle3\":62.799999,\"angle4\":30.799999,\"angle5\":-69.199997,\"angle6\":45.400002}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":48.299999,\"angle1\":77.000000,\"angle2\":-60.099998,\"angle3\":70.199997,\"angle4\":32.799999,\"angle5\":-69.300003,\"angle6\":36.000000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":48.099998,\"angle1\":77.000000,\"angle2\":-60.099998,\"angle3\":69.099998,\"angle4\":32.400002,\"angle5\":-69.300003,\"angle6\":4.300000}");


    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":48.000000,\"angle1\":77.000000,\"angle2\":-60.000000,\"angle3\":69.300003,\"angle4\":31.500000,\"angle5\":-69.300003,\"angle6\":-18.00000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":45.000000,\"angle1\":62.799999,\"angle2\":-59.799999,\"angle3\":60.599998,\"angle4\":37.700001,\"angle5\":-57.500000,\"angle6\":-18.000000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":29.200001,\"angle1\":39.099998,\"angle2\":-59.799999,\"angle3\":46.200001,\"angle4\":55.799999,\"angle5\":-27.600000,\"angle6\":-18.000000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":13.000000,\"angle1\":12.000000,\"angle2\":-14.700000,\"angle3\":43.099998,\"angle4\":50.400002,\"angle5\":-29.700001,\"angle6\":-18.000000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":12.500000,\"angle1\":-0.300000,\"angle2\":20.500000,\"angle3\":41.900002,\"angle4\":43.500000,\"angle5\":-34.200001,\"angle6\":-18.000000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":57.200001,\"angle1\":36.500000,\"angle2\":39.599998,\"angle3\":24.000000,\"angle4\":-21.299999,\"angle5\":16.500000,\"angle6\":-18.000000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":71.099998,\"angle1\":56.099998,\"angle2\":39.299999,\"angle3\":22.900000,\"angle4\":-45.400002,\"angle5\":38.299999,\"angle6\":-18.000000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":81.699997,\"angle1\":85.300003,\"angle2\":13.700000,\"angle3\":23.299999,\"angle4\":-62.099998,\"angle5\":40.500000,\"angle6\":-18.000000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":85.400002,\"angle1\":101.300003,\"angle2\":-7.500000,\"angle3\":21.299999,\"angle4\":-51.799999,\"angle5\":27.799999,\"angle6\":-18.000000}");

    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":48.000000,\"angle1\":77.000000,\"angle2\":-60.000000,\"angle3\":69.300003,\"angle4\":31.500000,\"angle5\":-69.300003,\"angle6\":-10}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":45.000000,\"angle1\":62.799999,\"angle2\":-59.799999,\"angle3\":60.599998,\"angle4\":37.700001,\"angle5\":-57.500000,\"angle6\":-10}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":29.200001,\"angle1\":39.099998,\"angle2\":-59.799999,\"angle3\":46.200001,\"angle4\":55.799999,\"angle5\":-27.600000,\"angle6\":-10}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":13.000000,\"angle1\":12.000000,\"angle2\":-14.700000,\"angle3\":43.099998,\"angle4\":50.400002,\"angle5\":-29.700001,\"angle6\":-10}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":12.500000,\"angle1\":-0.300000,\"angle2\":20.500000,\"angle3\":41.900002,\"angle4\":43.500000,\"angle5\":-34.200001,\"angle6\":-10}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":57.200001,\"angle1\":36.500000,\"angle2\":39.599998,\"angle3\":24.000000,\"angle4\":-21.299999,\"angle5\":16.500000,\"angle6\":-10}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":71.099998,\"angle1\":56.099998,\"angle2\":39.299999,\"angle3\":22.900000,\"angle4\":-45.400002,\"angle5\":38.299999,\"angle6\":-10}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":81.699997,\"angle1\":85.300003,\"angle2\":13.700000,\"angle3\":23.299999,\"angle4\":-62.099998,\"angle5\":40.500000,\"angle6\":-10}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":85.400002,\"angle1\":101.300003,\"angle2\":-7.500000,\"angle3\":21.299999,\"angle4\":-51.799999,\"angle5\":27.799999,\"angle6\":-10}");



    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":85.400002,\"angle1\":101.300003,\"angle2\":-7.500000,\"angle3\":20.799999,\"angle4\":-51.700001,\"angle5\":21.900000,\"angle6\":-5.400000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":76.099998,\"angle1\":73.599998,\"angle2\":11.100000,\"angle3\":26.400000,\"angle4\":-21.799999,\"angle5\":0.600000,\"angle6\":-5.400000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":60.200001,\"angle1\":43.200001,\"angle2\":40.500000,\"angle3\":24.700001,\"angle4\":-21.799999,\"angle5\":-9.300000,\"angle6\":-5.400000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":46.299999,\"angle1\":20.299999,\"angle2\":40.500000,\"angle3\":25.100000,\"angle4\":-21.799999,\"angle5\":-12.700000,\"angle6\":-6.500000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":10.600000,\"angle1\":-7.300000,\"angle2\":25.100000,\"angle3\":10.600000,\"angle4\":-5.900000,\"angle5\":-13.200000,\"angle6\":-6.500000}");


}