#pragma once

#include "land_vehicle.h"

class Camel final : public LandVehicle {
public:
    Camel();

private:
    double Rest(int number_of_rest) const override;
};
