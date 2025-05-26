// GeneralMember.h - addRentedBike 포함
#pragma once
#ifndef GENERAL_MEMBER_H
#define GENERAL_MEMBER_H

#include "Member.h"
#include <vector>
#include <string>

using namespace std;

class GeneralMember : public Member {
private:
    vector<string> rentedBikeIds;

public:
    GeneralMember(const string& id, const string& password, const string& phoneNumber);
    bool addRentedBike(const string& bikeId);
    vector<string> getRentedBikes() const;
};

#endif
