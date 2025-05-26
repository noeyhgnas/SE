// SignUp.cpp
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

void SignUp::addAdmin(AdminMember* admin) {
    adminMember = admin;
    memberList.push_back(admin);
}

AdminMember* SignUp::getAdmin() {
    return adminMember;
}
