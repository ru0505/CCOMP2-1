#include <iostream>
#include <bitset>

using namespace std;


float sumaBinaria(float num1, float num2) {
    
    unsigned int bits_num1 = *reinterpret_cast<unsigned int*>(&num1);
    unsigned int bits_num2 = *reinterpret_cast<unsigned int*>(&num2);

    bitset<32> bits_num1_bitset(bits_num1);
    bitset<32> bits_num2_bitset(bits_num2);

    cout << "numero 1 en binario: " << bits_num1_bitset << endl;
    cout << "numero 2 en binario: " << bits_num2_bitset << endl;

    
    int exponente1 = static_cast<int>((bits_num1 >> 23) & 0xFF) - 127;
    int exponente2 = static_cast<int>((bits_num2 >> 23) & 0xFF) - 127;
    int suma_exponentes = exponente1 + exponente2;

    
    unsigned int significando1 = (bits_num1 & 0x7FFFFF) | 0x800000;
    unsigned int significando2 = (bits_num2 & 0x7FFFFF) | 0x800000;
    unsigned int suma_significandos = static_cast<unsigned int>((static_cast<double>(significando1) / 0x800000) * (static_cast<double>(significando2) / 0x800000));

    
    while (suma_significandos >= 0x1000000) {
        suma_significandos >>= 1;
        suma_exponentes++;
    }
    
    if (suma_exponentes > 127) {
        cout << "Overflow" << endl;
    } else if (suma_exponentes < -126) {
        cout << "Underflow" << endl;
    }

    suma_exponentes += 127;
    unsigned int resultado = ((suma_significandos & 0x7FFFFF) | (static_cast<unsigned int>(suma_exponentes) << 23));

    bitset<32> bits_resultado(resultado);
    cout << "Resultado : " << bits_resultado << endl;

    
    float resultado_final = *reinterpret_cast<float*>(&resultado);
    return resultado_final;
}

int main() {
    float num1, num2;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    
    if (num1 == 0.0 || num2 == 0.0) {
        cout << "0."<< endl;
    } else {
        float resultado = sumaBinaria(num1, num2);
        cout << "El resultado es: " << resultado << endl;
    }

    return 0;
}
