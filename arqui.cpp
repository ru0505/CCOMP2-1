#include <iostream>
using namespace std;

int bitmulti(int multi, int mul) {
        int a = multi;
        int b = mul;
        int n ;
        if(b<0){n=-a;
        }else{n=a;}
        int resul = 0;
        for (int i = 0; i < 256; i++) { 
        int in = b & 1; 
        if (in == 1) {
        resul = resul + n;
        }
        bool menos_sig = resul & 1;
        
        resul = (resul >> 1) | (menos_sig << 7);
            b >>= 1;
    }
    return resul;
}
int main() {
        int mul, multi;
        cout << "Ingrese un numero: ";
        cin >> mul;
        cout << "Ingrese un numero: ";
        cin >> multi;
        int resultado = bitmulti(mul, multi);
        cout << "El producto es: " << resultado << endl;
    return 0;
}