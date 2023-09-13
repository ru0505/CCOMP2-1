#include <iostream>
#include <string>
#include "3.h"
using namespace std;

int main() {
    string make, fuelType, color;
    int yearOfManufacture, engineCapacity;

    cout << "Enter make: ";
    cin >> make;

    cout << "ingrese cual es el tipo: ";
    cin >> fuelType;

    cout << "año de la manofactura: ";
    cin >> yearOfManufacture;

    cout << "ingrese el color: ";
    cin >> color;

    cout << "ingrese la capacidad: ";
    cin >> engineCapacity;


    MotorVehicle car(make, fuelType, yearOfManufacture, color, engineCapacity);

    std::cout << "\nMake: " << car.getMake() << std::endl;
    std::cout << "el tipo: " << car.getFuelType() << std::endl;
    std::cout << "año de facturacion : " << car.getYearOfManufacture() << std::endl;
    std::cout << "Color: " << car.getColor() << std::endl;
    std::cout << "capacidad: " << car.getEngineCapacity() << std::endl;

    return 0;
}