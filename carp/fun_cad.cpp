#include <iostream>

using namespace std;

int contarcadena(string cad,char caracter){
    int tod=0;
    for(int i=0;i<cad.length();i++){
        if (cad.at(i) == caracter)
            tod++;
    }
    return tod;
}

int main(){
    string cadena;
    cout<< "ingrese una cadena: ";
    cin>> cadena;
    char carac;
    cout << "ingrese un caracter: ";
    cin>> carac;

    cout << "el caracter " << carac<<" se repite "<< contarcadena(cadena,carac)<< " veces!!"<<endl;

    return 0;
}