#ifndef ADD_BIKE_UI_H
#define ADD_BIKE_UI_H

#include <string>
#include <fstream>
using namespace std;

class AddBike;

/**
 * @brief Boundary class for interacting with the user to add a bike.
 */
class AddBikeUI {
public:
	AddBikeUI();

	/**
	 * @brief Starts the UI interface (currently unused).
	 */
	void startInterface();

	/**
	 * @brief Reads input and requests the controller to add a new bike.
	 * @param addBike Pointer to the AddBike control object.
	 * @param in_fp Input file stream to read bike data.
	 */
	void createNewBike(AddBike* addBike, ifstream& in_fp);
};

#endif
