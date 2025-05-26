#ifndef BIKE_COLLECTION_H
#define BIKE_COLLECTION_H

#include <vector>
#include <string>
#include "Bike.h"
#include "GeneralMember.h"

using namespace std;

/**
 * @brief Manages a collection of bikes including adding, searching, and renting.
 */
class BikeCollection {
private:
	vector<Bike*> bikeList;

public:
	/**
	 * @brief Adds a new bike to the collection.
	 */
	void addBike(const string& bikeId, const string& modelName);

	/**
	 * @brief Finds a bike by its ID.
	 * @return Pointer to the bike if found, nullptr otherwise.
	 */
	Bike* findBikeById(const string& bikeId);

	/**
	 * @brief Attempts to rent a bike to a member.
	 * @return True if successful, false otherwise.
	 */
	bool rentBikeToMember(GeneralMember* member, const string& bikeId);

	/**
	 * @brief Gets a list of bikes rented by a given member.
	 * @return Vector of rented Bike pointers.
	 */
	vector<Bike*> getBikesRentedBy(const GeneralMember* member);
};

#endif
