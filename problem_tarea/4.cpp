#include<iostream>

using namespace std;

int main(){
    int num1,num2;
    cout << "ingrese dos numeros: "<<endl;
    cin>>num1>>num2;

    if(num1 % 2==0){
        cout<<"es par"<<endl;
    }else{
        cout << "es impar"<<endl;
    }
    if(num2 % 2==0){
        cout<<"es par"<<endl;
    }else{
        cout << "es impar"<<endl;
    }
    int variable=num1+num2;

    if (variable % 2==0){
        cout <<"es par"<< endl;

    }else{
        cout<<"es impar"<<endl;
    }
  
    return 0;
}