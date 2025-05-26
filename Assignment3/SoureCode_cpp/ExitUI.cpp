#include "ExitUI.h"
#include <fstream>
using namespace std;

extern ofstream out_fp;

bool ExitUI::selectExit() {
    out_fp << "6.1. 종료" << endl;
    return true; // signal program exit
}
