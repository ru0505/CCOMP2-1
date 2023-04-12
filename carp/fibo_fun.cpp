#include <iostream>

using namespace std;

int fib (int n){
    int n1,n2,n3,fib,i;
    n1=n2=n3=i=1;
    if (n==1 || n==0)
       return 1;
    else{
     for ( ;i < n;i++){
        fib =n1+n2;
        n1=n2;
        n2=fib;
    }}
    return fib;
}

int main(){
    int n;
    cout<< "ingrese un numero: ";
    cin>>n;

    cout<< "el fiv es: "<< fib(n)<<endl;
    return 0;
}
    
