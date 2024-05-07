#pragma once

#include "vehicle.h"

class AirVehicle : public Vehicle {
public:
    AirVehicle(const std::string &name, double speed);

    virtual double Reduce(double length) const = 0;

    double GetRaceTime(double length) const override;

    virtual ~AirVehicle();
};