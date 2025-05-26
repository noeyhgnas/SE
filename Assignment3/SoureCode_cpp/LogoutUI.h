// LogoutUI.h
#pragma once
#ifndef LOGOUT_UI_H
#define LOGOUT_UI_H

#include <string>
#include <fstream>
using namespace std;

class Logout;

class LogoutUI {
public:
    LogoutUI();
    void startInterface();
    void logout(Logout* control, ofstream& out_fp, string& currentUserId);
};

#endif
