// GeneralMember.cpp - 리팩토링된 버전
#include "GeneralMember.h"
#include <algorithm>

GeneralMember::GeneralMember(const string& id, const string& password, const string& phoneNumber)
    : Member(id, password) {}

bool GeneralMember::addRentedBike(const string& bikeId) {
    rentedBikeIds.push_back(bikeId);
    return true;
}

vector<string> GeneralMember::getRentedBikes() const {
    vector<string> sorted = rentedBikeIds;
    sort(sorted.begin(), sorted.end());
    return sorted;
}
