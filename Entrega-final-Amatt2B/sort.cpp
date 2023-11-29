/*
 * Sort.cpp
 *
 *  Created on: 19/09/2023
 *      Author: AdrianMatute
 */

#include "driver.h"
#include "dls.h"
#include "search.h"
#include "sort.h"
#include <algorithm>

// Función auxiliar para particionar en Quick Sort
int partitionByNumber(std::vector<Driver> &listOfDrivers, int low, int high) {
		int pivot = listOfDrivers[high].driverNumber;
		int i = (low - 1);

		for (int j = low; j <= high - 1; j++) {
				if (listOfDrivers[j].driverNumber < pivot) {
						i++;
						std::swap(listOfDrivers[i], listOfDrivers[j]);
				}
		}
		std::swap(listOfDrivers[i + 1], listOfDrivers[high]);
		return (i + 1);
}

// Función principal de Quick Sort por número de piloto
void quickSortByNumber(std::vector<Driver> &listOfDrivers, int low, int high) {
		if (low < high) {
				int pi = partitionByNumber(listOfDrivers, low, high);

				quickSortByNumber(listOfDrivers, low, pi - 1);
				quickSortByNumber(listOfDrivers, pi + 1, high);
		}
}

void quickSortByNumber(std::vector<Driver> &listOfDrivers) {
		int n = listOfDrivers.size();
		quickSortByNumber(listOfDrivers, 0, n - 1);
}

// Función de apoyo para realizar el primer paso del Bubble Sort
void bubbleStep(std::vector<Driver> &listOfDrivers) {
		int n = listOfDrivers.size();
		for (int i = 0; i < n - 1; i++) {
				if (listOfDrivers[i].position > listOfDrivers[i + 1].position) {
						std::swap(listOfDrivers[i], listOfDrivers[i + 1]);
				}
		}
}

// Función de Bubble Sort para ordenar por posición a los pilotos
void bubbleSort(std::vector<Driver> &listOfDrivers) {
		int n = listOfDrivers.size();
		for (int i = 0; i < n - 1; i++) {
				bubbleStep(listOfDrivers);
		}
}

