#include <iostream>
#include "1_2.h"

using namespace std;

int main() {

    void m_det() {
        cout << "Marca: " << Mar << endl;
        cout << "Tipo de Gasolina: " << Com << endl;
        cout << "Año: " << Fab << endl;
        cout << "Color: " << Col << :endl;
        cout << "Capacidad del motor: " << Engine << endl << std::endl;
    

    v_motor carro1("ferrary", "96", 2019, "verde", 1600);
    v_motor carro2("4 x 4", "95", 2018, "negro", 1300);
    carro1.m_det();
    carro2.m_det();
    }
    return 0;
}