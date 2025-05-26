// LogoutUI.cpp
#include "LogoutUI.h"
#include "Logout.h"

LogoutUI::LogoutUI() {}

void LogoutUI::startInterface() {}

void LogoutUI::logout(Logout* logout, ofstream& out_fp, string& currentUserId) {
    out_fp << "2.2. 로그아웃" << endl;
    out_fp << "> " << currentUserId << endl << endl;
    logout->logout(currentUserId);
}
