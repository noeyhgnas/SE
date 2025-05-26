#include "Exit.h"
#include "ExitUI.h"

Exit::Exit() {
	this->exitUI = new ExitUI();
}

ExitUI* Exit::getExitUI() {
	return exitUI;
}
