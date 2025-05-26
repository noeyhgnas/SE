#pragma once
#ifndef BIKE_H
#define BIKE_H

#include <string>
using namespace std;

/**
 * @brief Represents a bike entity with ID and model name.
 */
class Bike {
private:
	string bikeId;
	string modelName;

public:
	/**
	 * @brief Default constructor.
	 */
	Bike();

	/**
	 * @brief Constructs a bike with ID and model name.
	 * @param bikeId Unique identifier of the bike.
	 * @param modelName Model name of the bike.
	 */
	Bike(const string& bikeId, const string& modelName);

	/**
	 * @brief Gets the ID of the bike.
	 * @return Bike ID.
	 */
	string getBikeId() const;

	/**
	 * @brief Gets the model name of the bike.
	 * @return Model name.
	 */
	string getModelName() const;
};

#endif
