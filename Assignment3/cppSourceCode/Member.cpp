#include "Member.h"

Member::Member(const string& id, const string& password) {
	this->id = id;
	this->password = password;
}

/**
 * @brief Gets the member ID.
 * @return Member ID string.
 */
string Member::getId() const {
	return id;
}

/**
 * @brief Gets the member password.
 * @return Password string.
 */
string Member::getPassword() const {
	return password;
}
