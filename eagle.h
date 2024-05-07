#pragma once

#include "air_vehicle.h"

class Eagle final : public AirVehicle {
public:
    Eagle();

private:
    double Reduce(double length) const override;
};