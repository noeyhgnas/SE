#pragma once
#ifndef ADMIN_MEMBER_H
#define ADMIN_MEMBER_H

#include "Member.h"
#include "BikeCollection.h"
#include <string>

using namespace std;

/**
 * @brief Represents an administrator who can manage the bike collection.
 */
class AdminMember : public Member {
private:
	BikeCollection bikeCollection;

public:
	/**
	 * @brief Constructs an AdminMember with ID and password.
	 * @param id Administrator ID
	 * @param password Administrator password
	 */
	AdminMember(const string& id, const string& password);

	/**
	 * @brief Adds a new bike to the admin's bike collection.
	 */
	void addNewBike(const string& bikeId, const string& modelName);

	/**
	 * @brief Gets the admin's bike collection.
	 * @return Reference to the bike collection.
	 */
	BikeCollection& getBikeCollection();
};

#endif
