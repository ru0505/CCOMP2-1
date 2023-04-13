#include <iostream>

using namespace std;


long long facto(int n){
    if (n ==0){
        return 1;
    }else{
        return n * facto(n-1);
    }
}

int main(){
    int n;
    cout<< "ingrese un numero: ";
    cin>>n;
    cout<< "el facto es: "<< facto(n)<<endl;
    return 0;
}
