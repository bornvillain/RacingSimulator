#pragma once

#include "land_vehicle.h"

class AllTerrainBoots final : public LandVehicle {
public:
    AllTerrainBoots();

private:
    double Rest(int number_of_rest) const override;
};