#include <iostream>

using namespace std;

int main (){
    string c;
    cout <<"ingrese una cadena: ";
    cin>>c;
    char v;
    cout <<"ingrese una letra: ";
    cin>>v;
    int r;
    
    
    for (int i=0;c.length()>i;i++){
        if (v == c.at(i)){
            r++;
        }
    }

    cout << "el caracter "<< v << " se repite "<< r <<" veces"<<endl;


 return 0;
}