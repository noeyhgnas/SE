#include "Logout.h"

Logout::Logout() {
	this->logoutUI = new LogoutUI();
}

LogoutUI* Logout::getLogoutUI() {
	return logoutUI;
}

/**
 * @brief Logs out the current user by clearing their ID.
 * @param currentUserId Reference to the current user ID string.
 */
void Logout::logout(string& currentUserId) {
	currentUserId = "";
}
