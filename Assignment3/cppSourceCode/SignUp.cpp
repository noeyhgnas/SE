#include "SignUp.h"

SignUp::SignUp() {
	signupUI = new SignUpUI();
	adminMember = nullptr;
}

SignUpUI* SignUp::getSignUpUI() {
	return signupUI;
}

vector<Member*>& SignUp::getMemberList() {
	return memberList;
}

/**
 * @brief Adds an admin member to the member list.
 */
void SignUp::addAdmin(AdminMember* admin) {
	adminMember = admin;
	memberList.push_back(admin);
}
	
/**
 * @brief Gets the registered admin member.
 */
AdminMember* SignUp::getAdmin() {
	return adminMember;
}
