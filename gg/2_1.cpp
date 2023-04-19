#include <iostream>

using namespace std;

long long fib (int n){
    int n1,n2,n3,fibi,i;
    n1=n2=n3=i=1;
    if (n==1 || n==0)
       return 1;
    else{
     for ( ;i < n;i++){
        fibi =n1+n2;
        n1=n2;
        n2=fibi;
    }}
    return fibi;
}
void imprimir(int n){
    for(int i=0;i<=n;i++){
    cout<<fib(i)<<" ";
    }cout<<endl;
}
int main(){
    int n;
    cout<< "ingrese un numero: ";
    cin>>n;
    imprimir(n);
    return 0;
}