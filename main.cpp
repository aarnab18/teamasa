//
// File main.cpp
//
// Code generated for Simulink model 'TeamASAController'.
//
// Model version                  : 1.2
// Simulink Coder version         : 23.2 (R2023b) 01-Aug-2023
// C/C++ source code generated on : Tue Nov 14 10:10:13 2023
//

#include <stdio.h>
#include "rosnodeinterface.h"
#include "slros_initialize.h"

extern void slros_node_init(int argc, char** argv);
namespace ros
{
  namespace matlab
  {
    std::shared_ptr<ros::matlab::NodeInterface> gMatlabNodeIntr;
    std::shared_ptr<ros::matlab::NodeInterface> getNodeInterface()
    {
      return gMatlabNodeIntr;
    }
  }                                    //namespace matlab
}                                      //namespace ros

int main(int argc, char* argv[])
{
  // create the Node specified in Model
  slros_node_init(argc, argv);
  ros::matlab::gMatlabNodeIntr = std::make_shared<ros::matlab::NodeInterface>();
  ros::matlab::gMatlabNodeIntr->initialize(argc, argv);
  auto ret = ros::matlab::gMatlabNodeIntr->run();
  ros::matlab::gMatlabNodeIntr->terminate();
  ros::matlab::gMatlabNodeIntr.reset();
  return ret;
}
