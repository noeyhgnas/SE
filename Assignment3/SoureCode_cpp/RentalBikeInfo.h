// RentalBikeInfo.h (리팩토링 반영)
#pragma once
#ifndef RENTAL_BIKE_INFO_H
#define RENTAL_BIKE_INFO_H

#include <string>
#include <vector>
#include "SignUp.h"
#include "BikeCollection.h"
#include "RentalBikeInfoUI.h"

class RentalBikeInfo {
private:
    SignUp* signup;
    BikeCollection* bikeCollection;
    RentalBikeInfoUI* rentalBikeInfoUI;

public:
    RentalBikeInfo(SignUp* signup, BikeCollection* bikeCollection);
    RentalBikeInfoUI* getRentalBikeInfoUI();
    void showRentedBikeList(const string& currentUserId);
};

#endif
