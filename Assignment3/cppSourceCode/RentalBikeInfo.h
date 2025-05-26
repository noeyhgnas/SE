#pragma once
#ifndef RENTAL_BIKE_INFO_H
#define RENTAL_BIKE_INFO_H

#include <string>
#include <vector>
#include "SignUp.h"
#include "BikeCollection.h"
#include "RentalBikeInfoUI.h"

/**
 * @brief Control class for displaying user's rented bike list.
 */
class RentalBikeInfo {
private:
	SignUp* signup;
	BikeCollection* bikeCollection;
	RentalBikeInfoUI* rentalBikeInfoUI;

public:
	/**
	 * @brief Constructor with dependency injection.
	 */
	RentalBikeInfo(SignUp* signup, BikeCollection* bikeCollection);

	/**
	 * @brief Gets the RentalBikeInfoUI instance.
	 */
	RentalBikeInfoUI* getRentalBikeInfoUI();

	/**
	 * @brief Displays bikes rented by the current user.
	 */
	void showRentedBikeList(const string& currentUserId);
};

#endif
