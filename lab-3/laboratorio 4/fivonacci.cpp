#include <iostream>

using namespace std;


int fib_rec(int n){
    if (n<=0 || n==1){
      return 1;
    }else  {
       return fib_rec(n-1)+fib_rec(n-2);
    }
}
int fib_buc(int n){
    int n1,n2,n3,fib;
    n1=n2=n3=1;
    if (n==1 || n==0)
       return 1;
    else{
     for ( int i=1;i < n;i++){
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
    cout<< "el fibo es: "<< fib_rec(n)<<endl;
    cout<< "el fib es: "<< fib_buc(n)<<endl;
    return 0;
}