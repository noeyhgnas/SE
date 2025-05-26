// Login.cpp
#include "Login.h"
#include "LoginUI.h"
#include "Member.h"

Login::Login(SignUp* signup) {
    this->signup = signup;
    this->loginUI = new LoginUI();
}

LoginUI* Login::getLoginUI() {
    return loginUI;
}

bool Login::verifyMember(const string& id, const string& password, string& currentUserId) {
    for (auto* member : signup->getMemberList()) {
        if (member->getId() == id && member->getPassword() == password) {
            currentUserId = id;
            return true;
        }
    }
    return false;
}
