#include <iostream>

using namespace std;

bool esPalindromo(int num) {
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int digito = num % 10;
        reversedNum = reversedNum * 10 + digito;
        num /= 10;
    }

    return originalNum == reversedNum;
}

int main() {
    int numero;

    cout << "Ingrese un numero para verificar si es un palindromo: ";
    cin >> numero;

    if (esPalindromo(numero)) {
        cout << numero << " es un palindromo." << endl;
    } else {
        cout << numero << " no es un palindromo." << endl;
    }

    return 0;
}
