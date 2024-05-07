#include "eagle.h"

Eagle::Eagle()
        : AirVehicle("Eagle", 8) {}

double Eagle::Reduce(double length) const {
    return 0.94;
}
