#include <iostream>

using namespace std;

//paso por valor 

void incremento(int &a){ //estoy utilizando la referencia '&'
    a=a+1;
    cout << "a dentro de la funcionn incremento "<<a<<endl;//4
}

int main (){
    int q=3;
    incremento(q);
    cout << "q en la funcion main "<<q<<endl;//4
    return 0;
}