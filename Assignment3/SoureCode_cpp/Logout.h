// Logout.h
#ifndef LOGOUT_H
#define LOGOUT_H

#include <string>
#include "LogoutUI.h"

class Logout {
private:
    LogoutUI* logoutUI;

public:
    Logout();
    LogoutUI* getLogoutUI();
    void logout(string& currentUserId);
};

#endif
