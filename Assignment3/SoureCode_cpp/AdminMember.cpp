// AdminMember.cpp
#include "AdminMember.h"
#include "Bike.h"

AdminMember::AdminMember(const string& id, const string& password)
    : Member(id, password) {}

void AdminMember::addNewBike(const string& bikeId, const string& modelName) {
    bikeCollection.addBike(bikeId, modelName);
}

BikeCollection& AdminMember::getBikeCollection() {
    return bikeCollection;
}
