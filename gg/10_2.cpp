#include <iostream>

using namespace std;

int main(){

    int n;
    cout <<"ingrese un numero: ";
    cin>>n;
    int tod=0;
    for(int i =2; n>1;i++){
        while(n%i==0){
            cout<<i<<" ";
            tod+=i;
            n=n/i;
        }
    }cout<<endl;
    cout<<tod<<endl;
    return 0;
}