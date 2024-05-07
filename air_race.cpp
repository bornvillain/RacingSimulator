#include "air_race.h"

AirRace::AirRace(double length) :
        Race("Race for air transport", length) {}

bool AirRace::CheckVehicleType(const Vehicle &vehicle) const {
    if (vehicle.GetName() == "Magic Carpet" || vehicle.GetName() == "Eagle" || vehicle.GetName() == "Broom") {
        return true;
    }
    return false;
}
