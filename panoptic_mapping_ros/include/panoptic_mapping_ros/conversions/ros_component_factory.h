#ifndef PANOPTIC_MAPPING_ROS_CONVERSIONS_ROS_COMPONENT_FACTORY_H_
#define PANOPTIC_MAPPING_ROS_CONVERSIONS_ROS_COMPONENT_FACTORY_H_

#include <memory>
#include <string>

#include <ros/node_handle.h>

#include <panoptic_mapping/integrator/integrator_base.h>
#include <panoptic_mapping/preprocessing/id_tracker_base.h>
#include <panoptic_mapping/preprocessing/label_handler.h>

namespace panoptic_mapping {

class ComponentFactoryROS {
 public:
  static std::unique_ptr<IntegratorBase> createIntegrator(
      const ros::NodeHandle& nh);
};

}  // namespace panoptic_mapping

#endif  // PANOPTIC_MAPPING_ROS_CONVERSIONS_ROS_COMPONENT_FACTORY_H_
