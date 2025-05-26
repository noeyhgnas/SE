#ifndef LOGOUT_H
#define LOGOUT_H

#include <string>
#include "LogoutUI.h"

/**
 * @brief Controls the logout process for the current user.
 */
class Logout {
private:
	LogoutUI* logoutUI;

public:
	/**
	 * @brief Constructor initializes LogoutUI.
	 */
	Logout();

	/**
	 * @brief Gets the LogoutUI instance.
	 * @return Pointer to LogoutUI.
	 */
	LogoutUI* getLogoutUI();

	/**
	 * @brief Clears the current user's ID (logout).
	 * @param currentUserId Reference to user ID to clear.
	 */
	void logout(string& currentUserId);
};

#endif
