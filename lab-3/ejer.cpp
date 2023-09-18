#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
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
            cout << i << " ";
        }
    }
    return 0;
}
