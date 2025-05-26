// BikeCollection.h - 리팩토링된 버전
#ifndef BIKE_COLLECTION_H
#define BIKE_COLLECTION_H

#include <vector>
#include <string>
#include "Bike.h"
#include "GeneralMember.h"

using namespace std;

class BikeCollection {
private:
    vector<Bike*> bikeList;

public:
    void addBike(const string& bikeId, const string& modelName);
    Bike* findBikeById(const string& bikeId);
    bool rentBikeToMember(GeneralMember* member, const string& bikeId);
    vector<Bike*> getBikesRentedBy(const GeneralMember* member);
};

#endif
