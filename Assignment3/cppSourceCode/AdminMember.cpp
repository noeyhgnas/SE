#include "AdminMember.h"
#include "Bike.h"

AdminMember::AdminMember(const string& id, const string& password)
	: Member(id, password) {}

/**
 * @brief Adds a new bike using the admin's bike collection.
 */
void AdminMember::addNewBike(const string& bikeId, const string& modelName) {
	bikeCollection.addBike(bikeId, modelName);
}

/**
 * @brief Gets the bike collection owned by the admin.
 * @return Reference to the admin's bike collection.
 */
BikeCollection& AdminMember::getBikeCollection() {
	return bikeCollection;
}
