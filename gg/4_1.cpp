//Un número palindrómico se lee igual en ambos sentidos. El palíndromo más grande hecho del producto de dos 
//números de 2 dígitos es 9009 = 91 × 99.
//Encuentra el palíndromo más grande hecho del producto de dos números de 3 dígitos.
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Ingresa el número de dígitos: ";
    cin >> n;

    int max_num = pow(10, n) - 1; // El número más grande con n dígitos
    int min_num = pow(10, n - 1); // El número más pequeño con n dígitos

    int max_palindrome = 0;
    for (int i = max_num; i >= min_num; i--) {
        for (int j = i; j >= min_num; j--) {
            int product = i * j;
            string product_str = to_string(product);
            string reverse_product_str = product_str;
            reverse(reverse_product_str.begin(), reverse_product_str.end());
            if (product_str == reverse_product_str && product > max_palindrome) {
                max_palindrome = product;
            }
        }
    }

    cout << n << " dígitos es: " << max_palindrome << endl;

    return 0;
}








