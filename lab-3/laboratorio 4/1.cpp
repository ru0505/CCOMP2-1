#include <iostream>
using namespace std;

int main(){
    int a;

    cout << "escribe un numero: ";
    cin >> a;

    long long y=0;
    for(long long i=0;i<a;i++){
        long long e= 0;
        if (i = 3) {
            for(long long u =0;u<a;u++){
                e = u*i;   
                }
        
        }if (i = 5){
            for(long long u =0;u<a;u++){
                e = u*i;
                }
        }
        y+=e;
     }
         cout << "el resultado es: " << y;
return 0;
}