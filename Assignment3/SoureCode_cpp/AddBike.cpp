#include "AddBike.h"

AddBike::AddBike(BikeCollection* bikeCollection) {
    this->bikeCollection = bikeCollection;
    this->addBikeUI = new AddBikeUI();
}

AddBikeUI* AddBike::getAddBikeUI() {
    return addBikeUI;
}

void AddBike::addNewBike(const string& bikeId, const string& modelName) {
    bikeCollection->addBike(bikeId, modelName);
}
