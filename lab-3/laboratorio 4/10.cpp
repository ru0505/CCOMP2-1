#include <iostream>
using namespace std;

int main() {
    while (true) {
        
        int n{0};
        long long suma{ 0 };
        cout << "Ingrese un numero menor a 2 000 000: ";
        cin >> n;
        if (n >=2000000) {
            cout << "Dije menor!!!!!!!! >:C" << endl;
            system("pause");
            continue;
        }//if
        else {
            for (long long i = 2; i <= n; i++) {
                int x{ 0 };
                if (i <= 1) {
                    continue;
                }
                for (int j = 2; j * j <= i; j++) {
                    if (i % j == 0) {
                        x = 1;
                        break;
                    }
                }
                if (x == 0) {
                    suma += i;
                }
            }
            cout << endl;
            cout << "La suma de los numeros primos menores al numero " << n << " es: " << suma<<endl;
            system("pause");
        }
        
    }


}