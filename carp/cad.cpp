#include <iostream>

using namespace std;

int main (){
    string c;
    cout <<"ingrese una cadena de numeros: ";
    cin>>c;
    int valor=0;

    for (int i=0;c.length()>i;i ++){
        valor  += (c.at(i)-'0');
        
    }cout << "la suma es "<< valor << end ;


  return 0;

}