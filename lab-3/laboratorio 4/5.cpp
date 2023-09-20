#include <stdio.h>
using namespace std;
#include <iostream>


int main(){
    int b;
    cout<<"escriba un limite: ";
    cin>>b;
    int c{1};
    
    while(c){
        for (int i=1; i<b;i++){
            if ((c%i)==0){
                c++;
            }else{break;}
        }
        break;
    }cout<< "el numero pequeño es: "<<c;
    return 0;
}
