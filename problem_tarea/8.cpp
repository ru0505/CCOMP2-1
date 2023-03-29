#include<iostream>

using namespace std;

int main(){

    int num;
    cout << "escriba 5 numeros: ";
    cin>>num;

    int num1 = num%10;
    int num2 = (num%100)/10;
    int num3 = (num%1000)/100;
    int num4 = (num %10000)/1000;

    cout<< num1 <<"  "<< num2<<"  "<<num3<<"  "<<num4<<endl;
    
    return 0;
}