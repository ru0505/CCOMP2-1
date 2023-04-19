#include <iostream>

using namespace std;


long long primos(int bol){
    int tod = 0;
    for ( int i=1;i< bol; i++){
        if ((i%5)==0||(i%3)==0){
            tod+=i;
            cout<<i<<" ";
        }
    }cout<<endl;
    return tod;
}
int main(){
    int c;
    cout<<"ingrese un numero: ";
    cin>>c;
    cout<<primos(c)<< endl;
    return 0; 
}