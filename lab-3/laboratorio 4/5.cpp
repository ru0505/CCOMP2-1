#include <stdio.h>
using namespace std;
#include <iostream>


int main(){
    int b;
    cout<<"escriba un limite: ";
    cin>>b;
    int c{1};
    int v{0};
    while(c){
        for (int i=1; i<b;i++){
            if ((c%i)==0){
                c++;
                v+=c;
            }else{break;}
        }
        break;
    }cout<< "el numero pequeño es: "<<v;
    return 0;
}
