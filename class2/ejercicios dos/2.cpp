#include <iostream>
#include <string>
#include "2.h"
using namespace std;

int main() {
    string pieza, descriptionpiez;
    int cantidaddecompra, cantidadarticulo;
    Factura factura1("libro","lectura",25,5);

    

    std::cout << "\ndescripcion: " << factura1.getdescriptionpiez() << std::endl;
    std::cout << "cantidad de articulo: " << factura1.getcantidadarticulo() << std::endl;
    std::cout << "cantidad de compre : " << factura1.getcantidaddecompra() << std::endl;
    std::cout << "pieza: " << factura1.getpieza() << std::endl;
    

    return 0;
}