#include <iostream>

using namespace std;

int main (){
    char n1,n2;
    int x;
    cout<< "ingrese el caracter: ";
    cin>>n1;
    cout<< "ingrese el caracter: ";
    cin>>n2;
     int val1 =static_cast<int>(n1);
     int val2 =static_cast<int>(n2);
    if ((val1 <= 48 || val1>=57)&&(val2 <= 48 || val2>=57)){
        cout <<"uno de los caracteres ingresados no es un numero ";
    }else{
        x=(val1-'0' )+(val2-'0');
        cout <<"la suma de los caracteres es "<<  x;
    }

  return 0;
}