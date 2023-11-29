/*
 * Search.cpp
 *
 *  Created on: 19/09/2023
 *      Author: AdrianMatute
 */

#include "driver.h"
#include "dls.h"
#include "search.h"
#include "sort.h"

Driver sequentialSearch(const std::vector<Driver> &listOfDrivers, int driverNumber) {
	for (const Driver &driver : listOfDrivers) {
		if (driver.driverNumber == driverNumber) {
			return driver;
		}
	}
	return {"", -1,};
}