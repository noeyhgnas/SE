#pragma once
#ifndef RENT_BIKE_UI_H
#define RENT_BIKE_UI_H

#include <string>
#include <fstream>
using namespace std;

class RentBike;

/**
 * @brief UI class for handling bike rental interaction.
 */
class RentBikeUI {
public:
	RentBikeUI();

	/**
	 * @brief Starts UI (currently unused).
	 */
	void startInterface();

	/**
	 * @brief Reads input and sends request to controller to rent a bike.
	 */
	void selectBike(RentBike* rentBike, ifstream& in_fp, const string& currentUserId);
};

#endif
