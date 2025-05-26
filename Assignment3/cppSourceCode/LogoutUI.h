#pragma once
#ifndef LOGOUT_UI_H
#define LOGOUT_UI_H

#include <string>
#include <fstream>
using namespace std;

class Logout;

/**
 * @brief Boundary class for handling logout user interaction.
 */
class LogoutUI {
public:
	LogoutUI();

	/**
	 * @brief Starts UI (currently unused).
	 */
	void startInterface();

	/**
	 * @brief Processes logout and calls control.
	 */
	void logout(Logout* control, ofstream& out_fp, string& currentUserId);
};

#endif
