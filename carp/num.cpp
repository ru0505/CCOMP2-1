#include<iostream>

using namespace std;

bool numero(char n){
    int num = static_cast<int>(n);
    return (num >= 49 && num <=57);
     
}
int main(){
    char n;
    cout << "ingrese un caracter: ";
    cin >> n;

    cout << numero(n)<<" es un caracter"<<endl;
}