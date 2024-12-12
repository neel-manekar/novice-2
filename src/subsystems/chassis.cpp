#include "subsystems/chassis.hpp"
using namespace okapi::literals;

const int8_t leftFront = 9;
const int8_t leftBack = 8;
const int8_t rightFront = -16;
const int8_t rightBack = -14;

std::shared_ptr<okapi::ChassisController> chassis = okapi::ChassisControllerBuilder()
  .withMotors({leftFront, leftBack}, {rightFront, rightBack})
  .withDimensions(okapi::AbstractMotor::gearset::green, {{4_in, 11.5_in}, okapi::imev5GreenTPR})
  .build();