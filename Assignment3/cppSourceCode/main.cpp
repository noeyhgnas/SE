#include <iostream>
#include <fstream>
#include <string>

#include "SignUp.h"
#include "SignUpUI.h"
#include "AddBike.h"
#include "AddBikeUI.h"
#include "RentBike.h"
#include "RentBikeUI.h"
#include "RentalBikeInfo.h"
#include "RentalBikeInfoUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "BikeCollection.h"
#include "Exit.h"
#include "ExitUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

ifstream in_fp;
ofstream out_fp;

void doTask(SignUp* signup, BikeCollection* bikeCollection, string& currentUserId);

int main() {
	in_fp.open(INPUT_FILE_NAME);
	out_fp.open(OUTPUT_FILE_NAME);

	
	SignUp* signup = new SignUp();
	AdminMember* admin = new AdminMember("admin", "admin");
	signup->addAdmin(admin);

	BikeCollection* bikeCollection = new BikeCollection();
	string currentUserId;

	doTask(signup, bikeCollection, currentUserId);

	out_fp.close();
	in_fp.close();
	return 0;
}

void doTask(SignUp* signup, BikeCollection* bikeCollection, string& currentUserId) {
	int menu_level_1 = 0, menu_level_2 = 0;
	bool is_program_exit = false;

	while (!is_program_exit && in_fp >> menu_level_1 >> menu_level_2) {
		switch (menu_level_1) {
		case 1:
			if (menu_level_2 == 1) {
				signup->getSignUpUI()->guestSignUp(signup, in_fp);
			}
			break;

		case 2:
			if (menu_level_2 == 1) {
				Login* login = new Login(signup);
				login->getLoginUI()->login(login, in_fp, currentUserId);
				delete login;
			}
			else if (menu_level_2 == 2) {
				Logout* logout = new Logout();
				logout->getLogoutUI()->logout(logout, out_fp, currentUserId);
				delete logout;
			}
			break;

		case 3:
			if (menu_level_2 == 1) {
				AddBike* addBike = new AddBike(bikeCollection);
				addBike->getAddBikeUI()->createNewBike(addBike, in_fp);
				delete addBike;
			}
			break;

		case 4:
			if (menu_level_2 == 1) {
				RentBike* rent = new RentBike(signup, bikeCollection);
				rent->getRentBikeUI()->selectBike(rent, in_fp, currentUserId);
				delete rent;
			}
			break;

		case 5:
			if (menu_level_2 == 1) {
				RentalBikeInfo* info = new RentalBikeInfo(signup, bikeCollection);
				info->getRentalBikeInfoUI()->selectRentalBikeInfoList(info, in_fp, currentUserId);
				delete info;
			}
			break;

		case 6:
			if (menu_level_2 == 1) {
				Exit* exit = new Exit();
				is_program_exit = exit->getExitUI()->selectExit();
			}
			break;
		}
	}
}
