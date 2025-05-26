#include "GeneralMember.h"
#include <algorithm>

GeneralMember::GeneralMember(const string& id, const string& password, const string& phoneNumber)
	: Member(id, password) {}

/**
 * @brief Adds a bike ID to the list of rented bikes.
 * @param bikeId ID of the bike to add.
 * @return True if successful.
 */
bool GeneralMember::addRentedBike(const string& bikeId) {
	rentedBikeIds.push_back(bikeId);
	return true;
}

/**
 * @brief Gets the list of bike IDs rented by the user.
 * @return Sorted vector of rented bike IDs.
 */
vector<string> GeneralMember::getRentedBikes() const {
	vector<string> sorted = rentedBikeIds;
	sort(sorted.begin(), sorted.end());
	return sorted;
}
