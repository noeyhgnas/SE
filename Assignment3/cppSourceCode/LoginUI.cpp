#include "LoginUI.h"
#include "Login.h"

extern ofstream out_fp;

LoginUI::LoginUI() {}

void LoginUI::startInterface() {}

/**
 * @brief Handles login input and output interaction.
 */
void LoginUI::login(Login* control, ifstream& in_fp, string& currentUserId) {
	string id, password;
	in_fp >> id >> password;

	bool success = control->verifyMember(id, password, currentUserId);

	out_fp << "2.1. 로그인" << endl;
	out_fp << "> " << id << " " << password << endl << endl;

	if (!success) {
		out_fp << "로그인 실패" << endl << endl;
	}
}
