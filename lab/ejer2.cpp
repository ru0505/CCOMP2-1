#include <iostream>

using namespace std;

int main(){
    
    float pi = 3.14159;
    float dia;
    cout << "ingrese un diametro del circulo: ";
    cin >>dia;

    float radio= dia /2;

    cout << "la circunferencia es: " << (2*(pi*radio)) << endl;
    cout << "el area es: "  << (pi*(radio*radio))<<endl;
    cout << "el diametro es: " << (2*radio)<<endl;
}