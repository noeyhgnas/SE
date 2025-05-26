// LoginUI.h
#pragma once
#ifndef LOGIN_UI_H
#define LOGIN_UI_H

#include <string>
#include <fstream>
using namespace std;

class Login;

class LoginUI {
public:
    LoginUI();
    void startInterface();
    void login(Login* login, ifstream& in_fp, string& currentUserId);
};

#endif
