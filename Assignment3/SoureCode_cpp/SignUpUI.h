// SignUpUI.h
#ifndef SIGN_UP_UI_H
#define SIGN_UP_UI_H

#include <fstream>
#include <string>

using namespace std;

class SignUp;

class SignUpUI {
public:
    SignUpUI();
    void startInterface();
    void guestSignUp(SignUp* signup, ifstream& in_fp);
};

#endif
