// RentalBikeInfoUI.h
#pragma once
#ifndef RENTAL_BIKE_INFO_UI_H
#define RENTAL_BIKE_INFO_UI_H

#include <string>
#include <fstream>
using namespace std;

class RentalBikeInfo;

class RentalBikeInfoUI {
public:
    RentalBikeInfoUI();
    void startInterface();
    void selectRentalBikeInfoList(RentalBikeInfo* rentalInfo, ifstream& in_fp, const string& currentUserId);
};

#endif
