#include "land_race.h"

LandRace::LandRace(double length) :
        Race("Race for land transport", length) {}

bool LandRace::CheckVehicleType(const Vehicle &vehicle) const {
    if (vehicle.GetName() == "Camel" || vehicle.GetName() == "Speedboat Camel" || vehicle.GetName() == "Centaur" ||
        vehicle.GetName() == "All Terrain Boots") {
        return true;
    }
    return false;
}
