// RentBike.h (리팩토링 반영)
#ifndef RENT_BIKE_H
#define RENT_BIKE_H

#include <string>
#include "SignUp.h"
#include "RentBikeUI.h"
#include "BikeCollection.h"

using namespace std;

class RentBike {
private:
    SignUp* signup;
    BikeCollection* bikeCollection;
    RentBikeUI* rentBikeUI;

public:
    RentBike(SignUp* signup, BikeCollection* bikeCollection);
    RentBikeUI* getRentBikeUI();
    void rentBike(const string& bikeId, const string& currentUserId);
};

#endif
