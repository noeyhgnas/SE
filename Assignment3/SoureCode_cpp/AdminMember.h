// AdminMember.h
#pragma once
#ifndef ADMIN_MEMBER_H
#define ADMIN_MEMBER_H

#include "Member.h"
#include "BikeCollection.h"
#include <string>

using namespace std;

class AdminMember : public Member {
private:
    BikeCollection bikeCollection;

public:
    AdminMember(const string& id, const string& password);
    void addNewBike(const string& bikeId, const string& modelName);
    BikeCollection& getBikeCollection();
};

#endif
