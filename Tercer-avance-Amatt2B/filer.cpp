/*
 * filer.cpp
 *
 *  Created on: 15/10/2023
 *      Author: AdrianMatute
 */
#include "filer.h"
#include "driver.h"
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

bool loadDriversFromFile(const std::string& filename, std::vector<Driver>& drivers) {
		std::ifstream file(filename);
		if (!file.is_open()) {
				// No se pudo abrir el archivo
				return false;
		}

		std::string line;
		while (std::getline(file, line)) {
				std::istringstream iss(line);
				Driver driver;

				if (std::getline(iss, driver.name, ',') &&
						(iss >> driver.driverNumber) &&
						(iss.ignore(1) && (iss >> driver.position)) &&
						iss.ignore(1) &&
						std::getline(iss, driver.team)) {
						drivers.push_back(driver);

						// Imprimir los datos de la línea leída
						std::cout << "Línea leída: " << driver.name << ", " << driver.driverNumber << ", " << driver.position << ", " << driver.team << std::endl;
				} else {
						std::cerr << "Error en el formato de línea: " << line << std::endl;
				}
		}

		file.close();
		return true;
}
