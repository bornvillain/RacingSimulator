#pragma once

#include <string>

class Vehicle {
public:
    Vehicle(const std::string &name, double speed);

    virtual double GetRaceTime(double length) const = 0;

    std::string GetName() const;

    double GetSpeed() const;

    virtual ~Vehicle();

private:
    double speed_;
    std::string name_;
};