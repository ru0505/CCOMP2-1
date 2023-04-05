
#include <iostream>

using namespace std;

int main (){
    int n;

    cout << "ingrese un numero: ";
    cin>> n;
    int n1,n2,n3,i;
    char fib;
    n1=n2=n3=i=1;

if (n==0 || n==1)
       cout << "el fibonacci de "<<n << "es "<< 1<<endl;
    else{
    while (i<n){
            fib = n1+n2;
            n1=n2;
            n2=fib;
            i++ ;
            cout<<"el fibo de "<<n<<"es"<< fib;

        }
    }

    return 0;
}