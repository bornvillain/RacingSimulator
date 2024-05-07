#pragma once

#include "land_vehicle.h"

class Centaur final : public LandVehicle {
public:
    Centaur();

private:
    double Rest(int number_of_rest) const override;
};