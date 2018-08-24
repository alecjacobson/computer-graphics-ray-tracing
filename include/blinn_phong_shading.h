#ifndef BLINN_PHONG_SHADING_H
#define BLINN_PHONG_SHADING_H
#include "Ray.h"
#include "Light.h"
#include "Object.h"
#include <Eigen/Core>
#include <vector>
#include <memory>


// includes Shadows!

Eigen::Vector3d blinn_phong_shading(
  const Ray & ray,
  const int & hit_id, 
  const double & t,
  const Eigen::Vector3d & n,
  const std::vector< std::shared_ptr<Object> > & objects,
  const std::vector<std::shared_ptr<Light> > & lights);

#endif
