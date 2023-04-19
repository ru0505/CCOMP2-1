#include <iostream>

using namespace std;


//Los factores primos de 13195 son 5, 7, 13 y 29.

//¿Cuál es el mayor factor primo del número 600851475143?


int num (int n){
    for(int i =2; n>1;i++){
        while(n%i==0){
            return i;
            n=n/i;
        }
    }
}
void imprimir(int n){
    for(int i=0;i<=n;i++){
    cout<<num(i)<<" ";
    }cout<<endl;
}
int main(){
    int n;
    cout <<"ingrese un numero: ";
    cin>>n;
    imprimir(n);
    return 0;
}