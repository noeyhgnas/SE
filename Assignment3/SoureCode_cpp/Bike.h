// Bike.h
#pragma once
#ifndef BIKE_H
#define BIKE_H

#include <string>
using namespace std;

class Bike {
private:
    string bikeId;
    string modelName;

public:
    Bike();
    Bike(const string& bikeId, const string& modelName);
    string getBikeId() const;
    string getModelName() const;
};

#endif