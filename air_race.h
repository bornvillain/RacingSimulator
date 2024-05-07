#pragma once

#include "race.h"

class AirRace final : public Race {
public:
    AirRace(double length);

    bool CheckVehicleType(const Vehicle &vehicle) const override;
};