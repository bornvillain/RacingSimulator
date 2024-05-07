#include "vehicle.h"

Vehicle::Vehicle(const std::string &name, double speed)
        : speed_(speed), name_(name) {}

std::string Vehicle::GetName() const {
    return name_;
}

double Vehicle::GetSpeed() const {
    return speed_;
}

Vehicle::~Vehicle() = default;

