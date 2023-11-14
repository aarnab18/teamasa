#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "TeamASAController";

// For Block TeamASAController/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_TeamASAController_std_msgs_Float64> Sub_TeamASAController_33;

// For Block TeamASAController/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_TeamASAController_std_msgs_Float64> Sub_TeamASAController_34;

// For Block TeamASAController/Publish
SimulinkPublisher<std_msgs::Float64, SL_Bus_TeamASAController_std_msgs_Float64> Pub_TeamASAController_31;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

