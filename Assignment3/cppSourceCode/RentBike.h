#ifndef RENT_BIKE_H
#define RENT_BIKE_H

#include <string>
#include "SignUp.h"
#include "RentBikeUI.h"
#include "BikeCollection.h"

using namespace std;

/**
 * @brief Control class for handling bike rental logic.
 */
class RentBike {
private:
	SignUp* signup;
	BikeCollection* bikeCollection;
	RentBikeUI* rentBikeUI;

public:
	/**
	 * @brief Constructor with dependency injection.
	 */
	RentBike(SignUp* signup, BikeCollection* bikeCollection);

	/**
	 * @brief Gets the UI class for renting a bike.
	 */
	RentBikeUI* getRentBikeUI();

	/**
	 * @brief Executes bike rental logic for the current user.
	 */
	void rentBike(const string& bikeId, const string& currentUserId);
};

#endif
