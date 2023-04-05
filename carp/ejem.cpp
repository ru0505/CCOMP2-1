#include <iostream>

using namespace std;

int main (){
    char n;


    cout<< "ingrese el caracter: ";
    cin>>n;

    int val =static_cast<int>(n);
    if ((val >= 65 && val <=90)|| (val >= 97 && val <= 122)){
       cout << " el caracter ingresado es una letra!!"<<endl;
    }else{
        cout << "el valor ingresado NO ES UNA LETRA "<<endl;
    }

  return 0;
}