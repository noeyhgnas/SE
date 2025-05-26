// Login.h
#pragma once
#ifndef LOGIN_H
#define LOGIN_H

#include "SignUp.h"
#include <string>
using namespace std;

class LoginUI;

class Login {
private:
    SignUp* signup;
    LoginUI* loginUI;

public:
    Login(SignUp* signup);
    LoginUI* getLoginUI();
    bool verifyMember(const string& id, const string& password, string& currentUserId);
};

#endif
