#include <iostream>
using namespace std;

int main(){
    long long n ;
    cout << "ingrese un numero entero: ";
    cin >>n;

    for (long long i=2; n>1; i ++){
        while(n%i==0){
            cout<<i <<" ";
            n =n/i;
        }
    }return 0;
}