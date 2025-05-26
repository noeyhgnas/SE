// AddBike.h - 리팩토링된 버전
#ifndef ADD_BIKE_H
#define ADD_BIKE_H

#include <string>
#include "SignUp.h"
#include "AddBikeUI.h"
#include "BikeCollection.h"

using namespace std;

class AddBike {
private:
    BikeCollection* bikeCollection;
    AddBikeUI* addBikeUI;

public:
    AddBike(BikeCollection* bikeCollection);
    AddBikeUI* getAddBikeUI();
    void addNewBike(const string& bikeId, const string& modelName);
};

#endif
