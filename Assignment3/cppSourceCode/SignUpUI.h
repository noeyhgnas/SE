#ifndef SIGN_UP_UI_H
#define SIGN_UP_UI_H

#include <fstream>
#include <string>

using namespace std;

class SignUp;

/**
 * @brief UI class for handling user sign-up interactions.
 */
class SignUpUI {
public:
	SignUpUI();

	/**
	 * @brief Starts the signup UI (currently unused).
	 */
	void startInterface();

	/**
	 * @brief Registers a guest user from input and updates signup.
	 */
	void guestSignUp(SignUp* signup, ifstream& in_fp);
};

#endif
