//Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13, podemos ver que el sexto primo es 13.
//¿Cuál es el número primo 10 001?
#include <iostream>
#include <cmath>

using namespace std;

bool nume(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int numers(int n) {
    int count = 0;
    int prime = 2;
    int i = 3;
    while (count < n - 1) {
        if (nume(i)) {
            prime = i;
            count++;
        }
        i += 2; 
    }
    return prime;
}
int main() {
    int n;
    cout << "Ingresa un numero: ";
    cin >> n;
    cout << "El número primo  " << n << " es " << numers(n) << endl;
    return 0;
}