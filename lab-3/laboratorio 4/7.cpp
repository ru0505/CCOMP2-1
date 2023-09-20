
#include <iostream>
using namespace std;

int main() {
    while (true) {
        system("cls");
        int n{ 0 }, cont{0};
        cout << "Ingrese un numero : ";
        cin >> n;
            for (long long i = 2; cont != n; i++) {
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
                    cont +=1;
                }
                if (cont == n) {
                    cout << endl;
                    cout << "El numero primo en la posicion " << n << " es: " << i << endl;
                }
            }
            system("pause");
    }//while
}//main
