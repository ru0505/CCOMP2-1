
#include <iostream>

using namespace std;

void intercambio(int &a, int &b){
    int temp =a;
    a=b;
    b=temp;
    cout<< "valor de a en intercambio es "<< a <<endl;
    cout<< "valor de b en intercambio es "<< b <<endl; 
}

int main(){
    int q=10;
    int r =20;

    intercambio(q,r);

    cout << "valor de q en main es "<< q<< endl;
    cout <<"el valor de r en main es " <<r<<endl;

    return 0;
}