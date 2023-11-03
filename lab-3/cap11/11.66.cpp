#include <iostream>
#include <iomanip>
#include "commision.h"
using namespace std;

int main(){
    CommisionEmployee employee{"sue","jhones", "222-22-2222",10000,.06};

    cout << fixed << setprecision(2);
    cout << "imformacion obtenida de la funcion: \n"<< "\n primer nombre: "<< employee.getprimernombre()<< "\napellido"<< employee.getapellido()<<"numero social: "<< employee.getnumerodeseguridad()<< "\n gross: "<< employee.getgross()<< "\n comision"<< employee.getcommision()<<endl;
    employee.setgross(8000);
    employee.setcommision(.1);
    cout << "\nSubir la imformacion en una cadena" << employee.tostring();

    cout << "\n earnings: "  <<  employee.earnings()<<endl;

}