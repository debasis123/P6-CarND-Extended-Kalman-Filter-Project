/*
* @Original Author: Udacity
* @Last Modified by: debasis123
*/

#ifndef MEASUREMENT_PACKAGE_H_
#define MEASUREMENT_PACKAGE_H_

#include "Eigen/Dense"

/**
 * Data structure to hold the measurement data
 */
struct MeasurementPackage {
  enum class SensorType{
    LASER,
    RADAR
  };
  SensorType sensor_type_;

  Eigen::VectorXd raw_measurements_;

  long long timestamp_;
};

#endif /* MEASUREMENT_PACKAGE_H_ */
