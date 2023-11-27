/*
 * driver.cpp
 *
 *  Created on: 19/09/2023
 *      Author: AdrianMatute
 */

#include "driver.h"
#include <iostream>

// Impresión del piloto en pantalla
void printDriver(const Driver &driver) {
	std::cout << "Nombre: " << driver.name << ", Número: " << driver.driverNumber
						<< ", Posición: " << driver.position << ", Equipo: " << driver.team
						<< std::endl;
}
