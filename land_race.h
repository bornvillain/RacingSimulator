#pragma once

#include "race.h"

class LandRace final : public Race {
public:
    LandRace(double length);

    bool CheckVehicleType(const Vehicle &vehicle) const override;
};
