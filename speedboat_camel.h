#pragma once

#include "land_vehicle.h"

class SpeedboatCamel final : public LandVehicle {
public:
    SpeedboatCamel();

private:
    double Rest(int number_of_rest) const override;
};
