#include <iostream>
using namespace std;
int main() {
  float m = 0;
  float c = 0;
  float mi = 0;
  float pe = 0;
  cout << "total de millas recorridas: " << endl;
  cin >> m;
  cout << "costo de gasolina por galon" <<endl;
  cin >> c;
  cout << "millas en promedio por galon" << endl;
  cin >> mi;
  cout << "peajes" << endl;
  cin >> pe;
  cout << "ahorro hasta s/." << (((c* m)*45)/100) + mi + pe << " de s/." << (c*m) + m + pe << " a diario." << endl;
  return 0;
}