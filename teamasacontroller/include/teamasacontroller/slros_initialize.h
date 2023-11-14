#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "TeamASAController_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block TeamASAController/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_TeamASAController_std_msgs_Float64> Sub_TeamASAController_33;

// For Block TeamASAController/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_TeamASAController_std_msgs_Float64> Sub_TeamASAController_34;

// For Block TeamASAController/Publish
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_TeamASAController_std_msgs_Float64> Pub_TeamASAController_31;

void slros_node_init(int argc, char** argv);

#endif
