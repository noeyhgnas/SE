#include "RentBike.h"
#include "GeneralMember.h"
#include "Bike.h"

extern ofstream out_fp;

RentBike::RentBike(SignUp* signup, BikeCollection* bikeCollection) {
    this->signup = signup;
    this->bikeCollection = bikeCollection;
    this->rentBikeUI = new RentBikeUI();
}

RentBikeUI* RentBike::getRentBikeUI() {
    return rentBikeUI;
}

void RentBike::rentBike(const string& bikeId, const string& currentUserId) {
    for (auto* member : signup->getMemberList()) {
        if (member->getId() == currentUserId) {
            GeneralMember* gm = dynamic_cast<GeneralMember*>(member);
            if (gm && bikeCollection->rentBikeToMember(gm, bikeId)) {
                Bike* bike = bikeCollection->findBikeById(bikeId);
                out_fp << "4.1. 자전거 대여" << endl;
                out_fp << "> " << bike->getBikeId() << " " << bike->getModelName() << endl << endl;
            }
            break;
        }
    }
}
