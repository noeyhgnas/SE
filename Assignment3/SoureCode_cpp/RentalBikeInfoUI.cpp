// RentalBikeInfoUI.cpp
#include "RentalBikeInfoUI.h"
#include "RentalBikeInfo.h"

RentalBikeInfoUI::RentalBikeInfoUI() {}

void RentalBikeInfoUI::startInterface() {}

void RentalBikeInfoUI::selectRentalBikeInfoList(RentalBikeInfo* rentalInfo, ifstream& in_fp, const string& currentUserId) {
    rentalInfo->showRentedBikeList(currentUserId);
}
