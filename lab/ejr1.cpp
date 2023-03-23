#include <iostream>

using namespace std;

int main (){

    int num1,num2,num3;
    cout << "ingrese tres numeros diferentes: ";
    cin >>num1 >>num2 >>num3;

    cout << "la suma es: " << (num1 + num2 + num3) << endl;
    cout << "la multiplicacion es: " << (num1 * num2 * num3) << endl;
    cout << "la promedio es: " << (num1 + num2 + num3)/3 << endl;
    
    int min = num1;
    int max =num1;
    if (min > num2){
        min = num2;
        if (min>num3){
            min = num3;
        }

    
    }
    if (max < num2){
        max = num2;
        if (max < num3){
            max = num3;
        }
    }
    cout << "el maximo es: " << max <<endl;
    cout << "el minimo es: " << min <<endl;



    return 0;
}