#pragma once
#ifndef EXIT_H
#define EXIT_H

class ExitUI;

/**
 * @brief Controls the termination process of the program.
 */
class Exit {
private:
	ExitUI* exitUI;

public:
	/**
	 * @brief Constructor initializes ExitUI.
	 */
	Exit();

	/**
	 * @brief Gets the ExitUI instance.
	 * @return Pointer to ExitUI.
	 */
	ExitUI* getExitUI();
};

#endif
