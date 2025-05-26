#ifndef ADD_BIKE_H
#define ADD_BIKE_H

#include <string>
#include "SignUp.h"
#include "AddBikeUI.h"
#include "BikeCollection.h"

using namespace std;

/**
 * @brief Controls the process of adding new bikes to the system.
 */
class AddBike {
private:
	BikeCollection* bikeCollection;
	AddBikeUI* addBikeUI;

public:
	/**
	 * @brief Constructor that initializes AddBike with a bike collection.
	 * @param bikeCollection Pointer to the bike collection.
	 */
	AddBike(BikeCollection* bikeCollection);

	/**
	 * @brief Get the AddBikeUI instance.
	 * @return Pointer to AddBikeUI.
	 */
	AddBikeUI* getAddBikeUI();

	/**
	 * @brief Add a new bike to the bike collection.
	 * @param bikeId ID of the bike.
	 * @param modelName Model name of the bike.
	 */
	void addNewBike(const string& bikeId, const string& modelName);
};

#endif
