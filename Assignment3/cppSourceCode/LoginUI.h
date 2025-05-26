#pragma once
#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include <string>
#include <fstream>
using namespace std;

class Login;

/**
 * @brief Boundary class for handling login user interaction.
 */
class LoginUI {
public:
	LoginUI();

	/**
	 * @brief Starts UI (currently unused).
	 */
	void startInterface();

	/**
	 * @brief Processes login from input and communicates with control.
	 */
	void login(Login* login, ifstream& in_fp, string& currentUserId);
};

#endif
