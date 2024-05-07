#pragma once

#include "air_vehicle.h"

class Broom final : public AirVehicle {
public:
    Broom();

private:
    double Reduce(double length) const override;
};
