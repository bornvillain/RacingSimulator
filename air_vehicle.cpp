#include "air_vehicle.h"

AirVehicle::AirVehicle(const std::string &name, double speed)
        : Vehicle(name, speed) {}

double AirVehicle::GetRaceTime(double length) const {
    return length * Reduce(length) / GetSpeed();
}

AirVehicle::~AirVehicle() = default;
