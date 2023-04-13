#include <iostream>

using namespace std;

long long fib_rec (int n){
    if(n==0 ||n==1){
        return 1;
    }else {
        return fib_rec (n-2)+fib_rec(n-1); 
    }
}
void imprimirfibo(int n){
    for (int i=0;i< n; i++)
        cout << fib_rec(i) << " ";
    cout << endl;
}
int main(){
    int n;
    cout<< "ingrese un numero: ";
    cin>>n;

    imprimirfibo(n);

    //cout<< "el fiv es: "<< fib_rec(n)<<endl;
    return 0;
}