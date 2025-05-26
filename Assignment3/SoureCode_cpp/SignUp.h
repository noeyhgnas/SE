// SignUp.h
#pragma once
#ifndef SIGN_UP_H
#define SIGN_UP_H

#include <vector>
#include "Member.h"
#include "SignUpUI.h"
#include "AdminMember.h"

using namespace std;

class SignUp {
private:
    vector<Member*> memberList;
    SignUpUI* signupUI;
    AdminMember* adminMember;

public:
    SignUp();
    SignUpUI* getSignUpUI();
    vector<Member*>& getMemberList();
    void addAdmin(AdminMember* admin);
    AdminMember* getAdmin();
};

#endif
