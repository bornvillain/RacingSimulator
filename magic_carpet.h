#pragma once

#include "air_vehicle.h"

class MagicCarpet final : public AirVehicle {
public:
    MagicCarpet();

private:
    double Reduce(double length) const override;
};