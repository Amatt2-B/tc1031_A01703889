/*
 * filer.h
 *
 *  Created on: 15/10/2023
 *      Author: AdrianMatute
 */
#ifndef FILER_H
#define FILER_H

#include "driver.h"
#include <vector>
#include <string>

bool loadDriversFromFile(const std::string& filename, std::vector<Driver>& drivers);

#endif // FILER_H
