#include "magic_carpet.h"

MagicCarpet::MagicCarpet()
        : AirVehicle("Magic Carpet", 10) {}

double MagicCarpet::Reduce(double length) const {
    if (length < 1000) {
        return 1;
    }
    if (length < 5000) {
        return 0.97;
    }
    if (length < 10000) {
        return 0.9;
    }
    return 0.95;
}
