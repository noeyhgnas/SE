// BikeCollection.cpp - 리팩토링된 버전
#include "BikeCollection.h"

void BikeCollection::addBike(const string& bikeId, const string& modelName) {
    bikeList.push_back(new Bike(bikeId, modelName));
}

Bike* BikeCollection::findBikeById(const string& bikeId) {
    for (auto* bike : bikeList) {
        if (bike->getBikeId() == bikeId) {
            return bike;
        }
    }
    return nullptr;
}

bool BikeCollection::rentBikeToMember(GeneralMember* member, const string& bikeId) {
    Bike* bike = findBikeById(bikeId);
    if (bike != nullptr) {
        return member->addRentedBike(bikeId);
    }
    return false;
}

vector<Bike*> BikeCollection::getBikesRentedBy(const GeneralMember* member) {
    vector<Bike*> result;
    vector<string> rentedIds = member->getRentedBikes();
    for (const auto& id : rentedIds) {
        Bike* bike = findBikeById(id);
        if (bike != nullptr) result.push_back(bike);
    }
    return result;
}
