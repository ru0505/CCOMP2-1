#include <iostream>

using namespace std;

int main() 
{

  int resta, pares, cuadrados;
  cuadrados=resta=0;
  for(pares=2;pares<=100;pares+=2)
 {
     cuadrados = pares * pares;
     resta =resta - cuadrados;
 }
 
 cout << "\nLa resta de los cuadrados del 0 al cien es: " << resta << endl;
 
 
 return 0;
}
