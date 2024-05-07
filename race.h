#pragma once

#include <string>
#include <memory>
#include <vector>
#include "vehicle.h"

class Race {
public:
    Race(double length);

    Race(const std::string &name, double length);

    void Register(std::unique_ptr<Vehicle> vehicle);

    void GetResults() const;

    void GetInfo() const;

    virtual bool CheckVehicleType(const Vehicle &vehicle) const;

    virtual ~Race();

    bool CheckRegistration() const;

private:
    struct ResultsInfo {
        std::string vehicle;
        double time;
    };
    std::vector<std::unique_ptr<Vehicle>> vehicles_;
    double length_;
    std::string name_;
};