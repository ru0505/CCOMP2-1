#include <iostream>

using namespace std;

int main(){

    float altura,peso;
    cout<<"escriba su altura en cm y  peso en kg: "<<endl;
    cin>>altura>>peso;

    float p=peso;
    float a=altura*altura;

    float c=p/a;

    cout<<c<<endl;

    if (c < 18.5){
        cout<<"tiene bajo peso";
    }if(18.5 < c && c < 24.9){
        cout<<"su peso es normal";
    }if(25 < c && c < 29.9){
        cout<<"tiene sobrepeso";
    }if (c>30){
        cout << "esta obeso";
    }
    return 0;

}