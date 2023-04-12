#include<iostream>

using namespace std;

bool caracter(char n){
    
    int val =static_cast<int>(n);
    return ((val >= 65 && val <=90)|| (val >= 97 && val <= 122));

}
int main(){
    char n;
    cout <<"ingrese un caracter: "<<endl;
    cin>>n;

    cout << caracter(n)<<endl;

    return 0;
}