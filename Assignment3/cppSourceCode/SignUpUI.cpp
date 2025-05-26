#include "SignUpUI.h"
#include "SignUp.h"
#include "GeneralMember.h"

extern ofstream out_fp;

SignUpUI::SignUpUI() {}

void SignUpUI::startInterface() {}

/**
 * @brief Handles guest signup input/output and updates member list.
 */
void SignUpUI::guestSignUp(SignUp* signup, ifstream& in_fp) {
	string id, password, phoneNumber;
	in_fp >> id >> password >> phoneNumber;

	Member* newMember = new GeneralMember(id, password, phoneNumber);
	signup->getMemberList().push_back(newMember);

	out_fp << "1.1. 회원가입" << endl;
	out_fp << "> " << id << " " << password << " " << phoneNumber << endl << endl;
}
