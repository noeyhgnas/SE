#include "LogoutUI.h"
#include "Logout.h"

LogoutUI::LogoutUI() {}

void LogoutUI::startInterface() {}

/**
 * @brief Handles logout interaction and outputs result.
 */
void LogoutUI::logout(Logout* logout, ofstream& out_fp, string& currentUserId) {
	out_fp << "2.2. 로그아웃" << endl;
	out_fp << "> " << currentUserId << endl << endl;
	logout->logout(currentUserId);
}
