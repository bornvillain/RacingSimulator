#include "broom.h"
#include <cmath>

Broom::Broom()
        : AirVehicle("Broom", 20) {}

double Broom::Reduce(double length) const {
    return 1 - (std::floor(length / 1000) / 100);
}
