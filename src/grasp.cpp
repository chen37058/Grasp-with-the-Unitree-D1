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

    // 零位
    unitree_arm::msg::dds_::ArmString_ msg{};
    msg.data_() = "{\"seq\":4,\"address\":1,\"funcode\":7}";
    publisher.Write(msg);
    sleep(1);

    int seq = 4;
    
    
    
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":37.200001,\"angle1\":9.600000,\"angle2\":0.400000,\"angle3\":2.000000,\"angle4\":-6.400000,\"angle5\":3.700000,\"angle6\":7.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":58.200001,\"angle1\":30.400000,\"angle2\":-18.700001,\"angle3\":2.500000,\"angle4\":-8.300000,\"angle5\":0.000000,\"angle6\":7.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":67.199997,\"angle1\":28.700001,\"angle2\":-18.500000,\"angle3\":4.400000,\"angle4\":-1.600000,\"angle5\":6.300000,\"angle6\":7.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":62.599998,\"angle1\":13.500000,\"angle2\":-18.400000,\"angle3\":9.600000,\"angle4\":13.200000,\"angle5\":6.400000,\"angle6\":7.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":54.500000,\"angle1\":-6.300000,\"angle2\":-18.400000,\"angle3\":9.200000,\"angle4\":32.299999,\"angle5\":8.900000,\"angle6\":7.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":55.200001,\"angle1\":-23.600000,\"angle2\":-18.400000,\"angle3\":-8.200000,\"angle4\":47.700001,\"angle5\":18.000000,\"angle6\":7.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":28.600000,\"angle1\":-4.900000,\"angle2\":-18.600000,\"angle3\":4.900000,\"angle4\":-26.799999,\"angle5\":20.100000,\"angle6\":7.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":21.500000,\"angle1\":38.400002,\"angle2\":-93.800003,\"angle3\":6.300000,\"angle4\":-18.600000,\"angle5\":13.600000,\"angle6\":7.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":28.100000,\"angle1\":51.299999,\"angle2\":-93.900002,\"angle3\":-9.700000,\"angle4\":-89.300003,\"angle5\":11.700000,\"angle6\":7.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":29.900000,\"angle1\":34.000000,\"angle2\":-93.900002,\"angle3\":0.500000,\"angle4\":-82.699997,\"angle5\":12.000000,\"angle6\":7.000000}");
    // sendArmCommand(publisher, seq, 2, "{\"mode\":1,\"angle0\":29.400000,\"angle1\":3.700000,\"angle2\":-93.699997,\"angle3\":-2.600000,\"angle4\":-66.599998,\"angle5\":12.200000,\"angle6\":7.000000}");

    // msg.data_() = "{\"seq\":4,\"address\":1,\"funcode\":7}";
    // publisher.Write(msg);

    switch(Tool_id) {
        case 0: // 一字改锥
            break;
        case 1: // 十字改锥
            break;
        case 2: // 六角扳手
            break;
        case 3: // 剪刀
            break;
        default:
            // 未知ID处理
            break;
    }

    // 零位
    msg.data_() = "{\"seq\":4,\"address\":1,\"funcode\":7}";
    publisher.Write(msg);
}

// int main(){
//     // 0:一字改锥 1:十字改锥 2:六角扳手 3:剪刀
//     int Tool_id = 1; 
//     Grasp(Tool_id); 
//     return 0;
// }