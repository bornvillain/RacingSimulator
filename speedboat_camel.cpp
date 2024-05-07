#include "speedboat_camel.h"

SpeedboatCamel::SpeedboatCamel()
        : LandVehicle("Speedboat Camel", 40, 10) {}

double SpeedboatCamel::Rest(int number_of_rest) const {
    if (number_of_rest == 1) {
        return 5;
    }
    if (number_of_rest == 2) {
        return 6.5;
    }
    return 8;
}
