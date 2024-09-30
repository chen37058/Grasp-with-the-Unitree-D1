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

extern "C" void Grasp(int Tool_id) {
    ChannelFactory::Instance()->Init(0);
    ChannelPublisher<unitree_arm::msg::dds_::ArmString_> publisher(TOPIC);
    publisher.InitChannel();

    
    unitree_arm::msg::dds_::ArmString_ msg{};
    int seq = 4;
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-62.200001,\"angle1\":54.299999,\"angle2\":-54.200001,\"angle3\":-21.100000,\"angle4\":40.500000,\"angle5\":15.100000,\"angle6\":-9.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-57.099998,\"angle1\":39.200001,\"angle2\":-53.900002,\"angle3\":-23.200001,\"angle4\":59.299999,\"angle5\":14.300000,\"angle6\":-9.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-52.000000,\"angle1\":8.000000,\"angle2\":-6.800000,\"angle3\":-25.700001,\"angle4\":48.799999,\"angle5\":25.600000,\"angle6\":-9.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-50.299999,\"angle1\":-22.000000,\"angle2\":24.100000,\"angle3\":-19.799999,\"angle4\":37.500000,\"angle5\":25.000000,\"angle6\":-9.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-56.200001,\"angle1\":-60.500000,\"angle2\":57.200001,\"angle3\":-13.000000,\"angle4\":36.099998,\"angle5\":19.400000,\"angle6\":-9.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-58.799999,\"angle1\":-71.199997,\"angle2\":84.000000,\"angle3\":-17.400000,\"angle4\":32.200001,\"angle5\":23.700001,\"angle6\":-9.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-77.099998,\"angle1\":-20.700001,\"angle2\":83.800003,\"angle3\":-23.799999,\"angle4\":-0.400000,\"angle5\":23.500000,\"angle6\":-9.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-97.300003,\"angle1\":18.299999,\"angle2\":73.199997,\"angle3\":-35.299999,\"angle4\":-17.700001,\"angle5\":15.400000,\"angle6\":-9.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-102.699997,\"angle1\":49.000000,\"angle2\":73.300003,\"angle3\":-15.000000,\"angle4\":-51.900002,\"angle5\":-15.300000,\"angle6\":-9.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-102.699997,\"angle1\":77.199997,\"angle2\":73.199997,\"angle3\":-12.000000,\"angle4\":-86.900002,\"angle5\":-15.300000,\"angle6\":-9.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-102.699997,\"angle1\":77.400002,\"angle2\":73.199997,\"angle3\":-10.900000,\"angle4\":-86.800003,\"angle5\":-14.300000,\"angle6\":12.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-99.699997,\"angle1\":51.200001,\"angle2\":80.500000,\"angle3\":-6.900000,\"angle4\":-78.099998,\"angle5\":-14.300000,\"angle6\":2.300000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-98.500000,\"angle1\":18.200001,\"angle2\":85.000000,\"angle3\":-3.200000,\"angle4\":-70.199997,\"angle5\":-14.300000,\"angle6\":2.200000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-84.900002,\"angle1\":-13.100000,\"angle2\":81.400002,\"angle3\":9.800000,\"angle4\":-54.500000,\"angle5\":-14.800000,\"angle6\":1.000000}");

    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-62.099998,\"angle1\":53.900002,\"angle2\":-54.099998,\"angle3\":-15.700000,\"angle4\":41.700001,\"angle5\":10.000000,\"angle6\":-8.600000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-59.400002,\"angle1\":36.299999,\"angle2\":-54.000000,\"angle3\":-8.500000,\"angle4\":50.900002,\"angle5\":9.100000,\"angle6\":-8.700000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-56.599998,\"angle1\":16.299999,\"angle2\":-54.000000,\"angle3\":8.300000,\"angle4\":55.099998,\"angle5\":-0.400000,\"angle6\":-8.700000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":-4.500000,\"angle1\":6.200000,\"angle2\":-53.900002,\"angle3\":6.000000,\"angle4\":63.900002,\"angle5\":7.400000,\"angle6\":-8.700000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":6.300000,\"angle1\":13.600000,\"angle2\":-24.900000,\"angle3\":4.300000,\"angle4\":23.700001,\"angle5\":17.200001,\"angle6\":-8.800000}");
    sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":6.300000,\"angle1\":-1.300000,\"angle2\":11.700000,\"angle3\":9.400000,\"angle4\":-0.100000,\"angle5\":3.000000,\"angle6\":-8.800000}");

        
}