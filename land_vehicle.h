#pragma once

#include "vehicle.h"

class LandVehicle : public Vehicle {
public:
    LandVehicle(const std::string &name, double speed, double time_before_rest);

    virtual double Rest(int number_of_rest) const = 0;

    double GetTimeBeforeRest() const;

    double GetRaceTime(double length) const override;

    virtual ~LandVehicle();

private:
    double time_before_rest_;
};