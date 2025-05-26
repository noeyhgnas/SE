// RentalBikeInfo.cpp (리팩토링 반영)
#include "RentalBikeInfo.h"
#include "GeneralMember.h"
#include "Bike.h"
#include <algorithm>

extern ofstream out_fp;

RentalBikeInfo::RentalBikeInfo(SignUp* signup, BikeCollection* bikeCollection) {
    this->signup = signup;
    this->bikeCollection = bikeCollection;
    this->rentalBikeInfoUI = new RentalBikeInfoUI();
}

RentalBikeInfoUI* RentalBikeInfo::getRentalBikeInfoUI() {
    return rentalBikeInfoUI;
}

void RentalBikeInfo::showRentedBikeList(const string& currentUserId) {
    for (auto* member : signup->getMemberList()) {
        if (member->getId() == currentUserId) {
            GeneralMember* gm = dynamic_cast<GeneralMember*>(member);
            if (gm != nullptr) {
                out_fp << "5.1. 자전거 대여 리스트" << endl;
                vector<Bike*> bikes = bikeCollection->getBikesRentedBy(gm);
                for (Bike* bike : bikes) {
                    out_fp << "> " << bike->getBikeId() << " " << bike->getModelName() << endl;
                }
                out_fp << endl;
            }
            break;
        }
    }
}
