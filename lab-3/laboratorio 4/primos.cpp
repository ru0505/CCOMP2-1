#include <iostream>
using namespace std;

bool es_primo(int n){
    if(n<=1 && (n%2)==0){
        return false;
    }
    if (n ==2){
        return true;
    }for (int i =3;i*i <= n;i+=2){
        if (n %i ==0){
            return false;
        }
    }return true;
}
// recursividad 

bool esDivisible(int num, int divisor) {
    if (divisor == 1) {
        return false;  // Si llegamos a 1 y no ha sido divisible, no es divisible
    }
    if (num % divisor == 0) {
        return true;   // Si es divisible, retorna verdadero
    }
    return esDivisible(num, divisor - 1);  // Llamada recursiva con un divisor menor
}

bool esPrimo(int num) {
    if (num < 2) {
        return false;  // Los números menores a 2 no son primos
    }

    // Llama a la función auxiliar para verificar si es divisible
    return !esDivisible(num, num - 1);
}


int main() {
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (es_primo(numero)) {
        cout << numero << " es primo." << endl;
    } else {
        cout << numero << " no es primo." << endl;
    }
    if (esPrimo(numero)) {
        cout << numero << " es primo." << endl;
    } else {
        cout << numero << " no es primo." << endl;
    }


    return 0;
}