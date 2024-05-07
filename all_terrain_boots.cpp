#include "all_terrain_boots.h"

AllTerrainBoots::AllTerrainBoots()
        : LandVehicle("All Terrain Boots", 6, 60) {}


double AllTerrainBoots::Rest(int number_of_rest) const {

    if (number_of_rest == 1) {
        return 10;
    }
    return 5;
}