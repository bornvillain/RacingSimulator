#include "centaur.h"

Centaur::Centaur()
        : LandVehicle("Centaur", 15, 8) {}

double Centaur::Rest(int number_of_rest) const {
    return 2;
}
