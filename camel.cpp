#include "camel.h"

Camel::Camel()
        : LandVehicle("Camel", 10, 30) {}

double Camel::Rest(int number_of_rest) const {
    if (number_of_rest == 1) {
        return 5;
    }
    return 8;
}

