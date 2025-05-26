// AddBikeUI.h
#ifndef ADD_BIKE_UI_H
#define ADD_BIKE_UI_H

#include <string>
#include <fstream>
using namespace std;

class AddBike;

class AddBikeUI {
public:
    AddBikeUI();
    void startInterface();
    void createNewBike(AddBike* addBike, ifstream& in_fp);
};

#endif
