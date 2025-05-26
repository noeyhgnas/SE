#pragma once
#ifndef RENTAL_BIKE_INFO_UI_H
#define RENTAL_BIKE_INFO_UI_H

#include <string>
#include <fstream>
using namespace std;

class RentalBikeInfo;

/**
 * @brief UI class for interacting with rented bike info feature.
 */
class RentalBikeInfoUI {
public:
	RentalBikeInfoUI();

	/**
	 * @brief Starts UI (currently unused).
	 */
	void startInterface();

	/**
	 * @brief Executes the logic to view rented bikes.
	 */
	void selectRentalBikeInfoList(RentalBikeInfo* rentalInfo, ifstream& in_fp, const string& currentUserId);
};

#endif
