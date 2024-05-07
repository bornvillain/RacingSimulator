#include "race.h"
#include <iostream>
#include <algorithm>

Race::Race(double length)
        : name_("Race for land and air transport"), length_(length) {}

Race::Race(const std::string &name, double length)
        : name_(name), length_(length) {}

void Race::Register(std::unique_ptr<Vehicle> vehicle) {
    if (!CheckVehicleType(*vehicle)) {
        std::cout << "Attempting to register the wrong type of vehicle!" << std::endl;
    } else {

        if (std::find_if(vehicles_.begin(), vehicles_.end(), [&](const std::unique_ptr<Vehicle> &v) {
            return vehicle->GetName() == v->GetName();
        }) != vehicles_.end()) {
            std::cout << vehicle->GetName() << " is already registered!" << std::endl;
        } else {
            std::cout << vehicle->GetName() << " successfully registered!" << std::endl;
            vehicles_.push_back(std::move(vehicle));
        }
    }
}

void Race::GetResults() const {
    if (CheckRegistration()) {
        std::vector<ResultsInfo> results;
        for (const auto &vehicle: vehicles_) {
            results.push_back({vehicle->GetName(), vehicle->GetRaceTime(length_)});
        }
        std::sort(results.begin(), results.end(), [](const ResultsInfo &lhs, const ResultsInfo &rhs) {
            return lhs.time < rhs.time;
        });
        std::cout << "Race results: " << std::endl;
        for (size_t i = 0; i < results.size(); ++i) {
            std::cout << (i + 1) << ". " << results[i].vehicle << ". Time: " << results[i].time << std::endl;
        }
    }
}

void Race::GetInfo() const {
    std::cout << name_ << ". Distance: " << length_ << std::endl;
    if (vehicles_.size() > 0) {
        std::cout << "Registered vehicles: ";
        bool is_first = true;
        for (const auto &vehicle: vehicles_) {
            if (!is_first) {
                std::cout << ", " << vehicle->GetName();
            } else {
                std::cout << vehicle->GetName();
                is_first = false;
            }
        }
        std::cout << std::endl;
    }
}

bool Race::CheckVehicleType(const Vehicle &vehicle) const {
    return true;
}

Race::~Race() = default;

bool Race::CheckRegistration() const {
    if (vehicles_.size() > 1) {
        return true;
    }
    std::cout << "At least 2 vehicles must be registered!" << std::endl;
    return false;
}
