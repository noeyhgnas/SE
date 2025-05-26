#include "Bike.h"

Bike::Bike() {
	this->bikeId = "";
	this->modelName = "";
}

Bike::Bike(const string& bikeId, const string& modelName) {
	this->bikeId = bikeId;
	this->modelName = modelName;
}

string Bike::getBikeId() const {
	return bikeId;
}

string Bike::getModelName() const {
	return modelName;
}
