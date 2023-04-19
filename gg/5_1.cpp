//2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin resto.

//¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 al 20?
#include <iostream>

using namespace std;

long long numpequeño(int i){
    int m=1;
    for(int n=1;n<=i;n++){
        if ((m%n)==0){
            m++;
        }
    }return m;
}

int main(){
    int c;
    cout<<"ingrese un numero: ";
    cin>>c;
    cout<<numpequeño(c)<< endl;
    return 0; 
}