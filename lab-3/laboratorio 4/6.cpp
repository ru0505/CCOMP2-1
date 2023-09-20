#include <iostream>

using namespace std;

int main() 
{
  int a;
  cout<<"escribe la cantidad de cuadrados que quieres";
  cin>>a;
  int resta, pares, cuadrados;
  cuadrados=suma=0;
  for(pares=2;pares<=a;pares+=2)
 {
     cuadrados = pares * pares;
     suma=suma- cuadrados;
 }
 
 cout << "\nLa suma de los cuadrados : " << suma << endl;
 
 
 return 0;
}
