#pragma once
#ifndef LOGIN_H
#define LOGIN_H

#include "SignUp.h"
#include <string>
using namespace std;

class LoginUI;

/**
 * @brief Handles login logic for verifying user credentials.
 */
class Login {
private:
	SignUp* signup;
	LoginUI* loginUI;

public:
	/**
	 * @brief Constructor initializing with signup data.
	 */
	Login(SignUp* signup);

	/**
	 * @brief Gets the LoginUI instance.
	 * @return Pointer to LoginUI.
	 */
	LoginUI* getLoginUI();

	/**
	 * @brief Verifies if member credentials match.
	 */
	bool verifyMember(const string& id, const string& password, string& currentUserId);
};

#endif
