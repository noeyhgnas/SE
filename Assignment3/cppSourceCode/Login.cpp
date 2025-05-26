#include "Login.h"
#include "LoginUI.h"
#include "Member.h"

Login::Login(SignUp* signup) {
	this->signup = signup;
	this->loginUI = new LoginUI();
}

LoginUI* Login::getLoginUI() {
	return loginUI;
}

/**
 * @brief Verifies login credentials against the signup member list.
 * @param id User ID
 * @param password User password
 * @param currentUserId Output parameter for the matched user ID
 * @return True if credentials are valid
 */
bool Login::verifyMember(const string& id, const string& password, string& currentUserId) {
	for (auto* member : signup->getMemberList()) {
		if (member->getId() == id && member->getPassword() == password) {
			currentUserId = id;
			return true;
		}
	}
	return false;
}
