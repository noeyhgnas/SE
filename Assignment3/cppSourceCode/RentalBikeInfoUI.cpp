#include "RentalBikeInfoUI.h"
#include "RentalBikeInfo.h"

RentalBikeInfoUI::RentalBikeInfoUI() {}

void RentalBikeInfoUI::startInterface() {}

/**
 * @brief Triggers the control function to show rented bike info.
 */
void RentalBikeInfoUI::selectRentalBikeInfoList(RentalBikeInfo* rentalInfo, ifstream& in_fp, const string& currentUserId) {
	rentalInfo->showRentedBikeList(currentUserId);
}
