#pragma once
#ifndef SIGN_UP_H
#define SIGN_UP_H

#include <vector>
#include "Member.h"
#include "SignUpUI.h"
#include "AdminMember.h"

using namespace std;

/**
 * @brief Manages user signup and stores all member information.
 */
class SignUp {
private:
	vector<Member*> memberList;
	SignUpUI* signupUI;
	AdminMember* adminMember;

public:
	/**
	 * @brief Constructor to initialize signup system.
	 */
	SignUp();

	/**
	 * @brief Gets the SignUp UI object.
	 * @return Pointer to SignUpUI.
	 */
	SignUpUI* getSignUpUI();

	/**
	 * @brief Gets the list of all members.
	 * @return Reference to the member list.
	 */
	vector<Member*>& getMemberList();

	/**
	 * @brief Adds an administrator account.
	 */
	void addAdmin(AdminMember* admin);

	/**
	 * @brief Gets the admin member object.
	 * @return Pointer to admin member.
	 */
	AdminMember* getAdmin();
};

#endif
