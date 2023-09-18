#include <iostream>
using namespace std;

int main() {
    int n{0};
    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;
    int l{ 0 };
    for (int  i{ 1 }; l != n; i++) {
        int  x{ 0 };
        for (int j{ 1 }; j < i; j++) {

            if (i % j == 0) {
                x = x + j;
            }
        }
        if (x == i) {
            cout << i << " ";
            l++;

        }
    }
    return 0;
}
