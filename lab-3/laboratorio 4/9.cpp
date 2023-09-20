#include <iostream>
using namespace std;

int main() {

    for (int a = 1; a <= 1000; a++) {
        for (int b = a; b <= 1000; b++) {
            for (int c = b + 1; c <= 1000; c++) {
                if (a * a + b * b == c * c) {
                    if (a + b + c == 1000) {
                        cout << "El triplete pitagorico el cual a + b + c = 1000 es:" << endl;
                        cout << "(" << a << ", " << b << ", " << c << ")" << endl;
                        cout << "Y el producto a*b*c es: " << a*b*c <<endl;
                        return 0;
                    }
                }
            }
       }
    }
}
