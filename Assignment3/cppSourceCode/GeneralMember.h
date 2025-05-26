#pragma once
#ifndef GENERAL_MEMBER_H
#define GENERAL_MEMBER_H

#include "Member.h"
#include <vector>
#include <string>

using namespace std;

/**
 * @brief Represents a general member who can rent bikes.
 */
class GeneralMember : public Member {
private:
	vector<string> rentedBikeIds;

public:
	/**
	 * @brief Constructor that initializes a general member.
	 * @param id Member ID
	 * @param password Member password
	 * @param phoneNumber Member's phone number
	 */
	GeneralMember(const string& id, const string& password, const string& phoneNumber);

	/**
	 * @brief Adds a bike to the rented list.
	 * @param bikeId ID of the rented bike
	 * @return True if successfully added
	 */
	bool addRentedBike(const string& bikeId);

	/**
	 * @brief Gets the list of rented bike IDs.
	 * @return Vector of rented bike IDs (sorted)
	 */
	vector<string> getRentedBikes() const;
};

#endif
