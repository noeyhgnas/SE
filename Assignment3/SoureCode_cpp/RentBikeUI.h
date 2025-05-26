// RentBikeUI.h
#pragma once
#ifndef RENT_BIKE_UI_H
#define RENT_BIKE_UI_H

#include <string>
#include <fstream>
using namespace std;

class RentBike;

class RentBikeUI {
public:
    RentBikeUI();
    void startInterface();
    void selectBike(RentBike* rentBike, ifstream& in_fp, const string& currentUserId);
};

#endif
