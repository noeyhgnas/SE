// AddBikeUI.cpp
#include "AddBikeUI.h"
#include "AddBike.h"
#include <iostream>
extern ofstream out_fp;

AddBikeUI::AddBikeUI() {}

void AddBikeUI::startInterface() {}

void AddBikeUI::createNewBike(AddBike* addBike, ifstream& in_fp) {
    string bikeId, modelName;
    in_fp >> bikeId >> modelName;

    addBike->addNewBike(bikeId, modelName);

    out_fp << "3.1. 자전거 등록" << endl;
    out_fp << "> " << bikeId << " " << modelName << endl << endl;
}
