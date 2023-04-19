#include <iostream>
#include <cmath>
using namespace std;

void factores_primos(long long n) {
    while (n % 2 == 0) {
        cout << "2 ";
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }

    if (n > 2) {
        cout << n << " ";
    }
}

int main() {
    long long n;
    cout << "Ingresa un número: ";
    cin >> n;

    cout << "Los factores primos de " << n << " son: ";
    factores_primos(n);
    cout << endl;

    return 0;
}
//600851475143