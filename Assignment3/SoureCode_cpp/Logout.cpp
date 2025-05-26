// Logout.cpp
#include "Logout.h"

Logout::Logout() {
    this->logoutUI = new LogoutUI();
}

LogoutUI* Logout::getLogoutUI() {
    return logoutUI;
}

void Logout::logout(string& currentUserId) {
    currentUserId = "";
}
