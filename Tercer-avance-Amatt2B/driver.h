/*
 * driver.h
 *
 *  Created on: 19/09/2023
 *      Author: AdrianMatute
 */

#ifndef DRIVER_H
#define DRIVER_H

#include <string>

// Estructura de la información de un piloto
struct Driver {
	std::string name;
	int driverNumber;
	int position;
	std::string team;
};

void printDriver(const Driver &driver);

#endif // DRIVER_H
