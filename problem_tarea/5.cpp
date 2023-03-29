#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3;
    cout<<"ingrese el primer Numero: "<<endl;
    cin>>num1;
    cout<<"ingrese el segundo Numero: "<<endl;
    cin>>num2;
    cout<<"ingrese el tercer Numero: "<<endl;
    cin>>num3;
    if(num1%num2 == 0 || num2%num1 == 0){
        cout<<num3 <<" es factor de "<< num1 <<" y "<< num2<<endl;
    }
    else{
        cout<<num3 <<" no es factor de "<< num1 <<" y "<< num2<<endl;
    }
    return 0;
}