#include "land_vehicle.h"
#include <cmath>

LandVehicle::LandVehicle(const std::string &name, double speed, double time_before_rest)
        : Vehicle(name, speed), time_before_rest_(time_before_rest) {}

double LandVehicle::GetTimeBeforeRest() const {
    return time_before_rest_;
}

double LandVehicle::GetRaceTime(double length) const {
    double race_time = 0;
    int number_of_rests = std::ceil(length / (GetSpeed() * GetTimeBeforeRest())) - 1;
    for (int i = 0; i < number_of_rests; ++i) {
        race_time += Rest(i + 1);
    }
    race_time += length / GetSpeed();
    return race_time;
}

LandVehicle::~LandVehicle() = default;
