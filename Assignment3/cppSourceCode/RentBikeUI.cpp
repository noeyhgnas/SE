#include "RentBikeUI.h"
#include "RentBike.h"

RentBikeUI::RentBikeUI() {}

void RentBikeUI::startInterface() {}

/**
 * @brief Reads user input and initiates bike rental.
 */
void RentBikeUI::selectBike(RentBike* rentBike, ifstream& in_fp, const string& currentUserId) {
	string bikeId;
	in_fp >> bikeId;
	rentBike->rentBike(bikeId, currentUserId);
}
