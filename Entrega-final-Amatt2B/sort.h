// sort.h

#ifndef SORT_H
#define SORT_H

#include "driver.h"
#include <vector>

// Función para ordenamiento de lista por el método Bubble Sort
void bubbleSort(std::vector<Driver> &listOfDrivers);

// Función para ordenamiento de lista por el método Quick Sort
void quickSortByNumber(std::vector<Driver> &listOfDrivers);

#endif // SORT_H
