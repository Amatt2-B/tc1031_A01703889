/*
 * search.h
 *
 *  Created on: 19/09/2023
 *      Author: AdrianMatute
 */

#ifndef SEARCH_H
#define SEARCH_H

#include "driver.h"
#include <vector>

// Busqueda secuencial del piloto
Driver sequentialSearch(const std::vector<Driver> &listOfDrivers, int driverNumber);

#endif // SEARCH.H
