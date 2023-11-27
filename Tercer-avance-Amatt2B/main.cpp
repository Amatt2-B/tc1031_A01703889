// main.cpp

#include "dls.h"
#include "driver.h"
#include "filer.h"
#include "search.h"
#include "sort.h"
#include <iostream>
#include <limits>
#include <string>

int main() {
  DoublyLinkedList listOfDrivers;

  std::vector<Driver> drivers;

  int choice;
  do {
    std::cout << "Menu de opciones:" << std::endl;
    std::cout << "1. Agregar piloto" << std::endl;
    std::cout << "2. Eliminar piloto" << std::endl;
    std::cout << "3. Cargar datos desde archivo" << std::endl;
    std::cout << "4. Ordenar lista por posición" << std::endl;
    /*    std::cout << "5. Ordenar lista por número de piloto" << std::endl;
     */
    std::cout << "6. Buscar piloto" << std::endl;
    std::cout << "7. Mostrar lista" << std::endl;
    std::cout << "8. Salir" << std::endl;
    std::cout << "Elija una opcion: ";
    std::cin >> choice;

    if (choice < 1 || choice > 8) {
      std::cout << "Opcion no valida. Intente de nuevo." << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
      switch (choice) {
      case 1: {
        // Agregar piloto
        Driver newDriver;
        std::cout << "Nombre: ";
        std::cin.ignore();
        std::getline(std::cin, newDriver.name);
        std::cout << "Número: ";
        std::cin >> newDriver.driverNumber;
        std::cout << "Posición: ";
        std::cin >> newDriver.position;
        std::cout << "Equipo: ";
        std::cin.ignore();
        std::getline(std::cin, newDriver.team);

        listOfDrivers.insertDriver(newDriver);
        std::cout << "Piloto agregado." << std::endl;
      } break;
      case 2: {
        // Eliminar piloto
        int driverNumber;
        std::cout << "Número de piloto a eliminar: ";
        std::cin >> driverNumber;

        listOfDrivers.deleteDriver(driverNumber);
        std::cout << "Piloto eliminado." << std::endl;
      } break;
      case 3:
        // Cargar datos desde archivo
        drivers.clear(); // Limpiar el vector de drivers antes de cargar
        if (loadDriversFromFile("pilotos.txt", drivers)) {
          listOfDrivers.setDrivers(drivers);
          std::cout << "Datos cargados desde el archivo." << std::endl;
        } else {
          std::cout << "No se pudo cargar el archivo." << std::endl;
        }
        break;
      case 4:
        // Ordenar lista por posición (bubble sort)
        listOfDrivers.bubbleSort();
        std::cout << "Lista ordenada por posición." << std::endl;
        break;
        /*     case 5:
               // Ordenar lista por número de piloto (quick sort)
               quickSortByNumber(drivers);
               listOfDrivers.setDrivers(drivers);
               std::cout << "Lista ordenada por número de piloto." << std::endl;
               break;
       */
      case 6: {
        // Buscar piloto
        int driverNumber;
        std::cout << "Número de piloto a buscar: ";
        std::cin >> driverNumber;

        Driver result = listOfDrivers.searchDriver(driverNumber);
        if (result.driverNumber != -1) {
          std::cout << "Resultado de la búsqueda:" << std::endl;
          std::cout << "Nombre: " << result.name
                    << ", Número: " << result.driverNumber
                    << ", Posición: " << result.position
                    << ", Equipo: " << result.team << std::endl;
        } else {
          std::cout << "Piloto no encontrado." << std::endl;
        }
      } break;
      case 7:
        // Mostrar lista
        listOfDrivers.printList();
        break;
      case 8:
        std::cout << "Saliendo del programa." << std::endl;
        break;
      default:
        std::cout << "Opción no válida. Intente de nuevo." << std::endl;
      }
    }

  } while (choice != 8);

  return 0;
}
