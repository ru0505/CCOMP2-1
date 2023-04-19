//La suma de los números primos por debajo de 10 es 2 + 3 + 5 + 7 = 17.
//Encuentra la suma de todos los números primos por debajo de dos millones.
#include <iostream>

using namespace std;


bool primos(int n){
    bool con;
    int sum=0;
    if(n !=1 &&n != 0){
        for(int i=2;i<=n;i++){
            if(n%i == 0){
                if(n==i){
                    con = true;
                }else{
                    con = false;
                    return con;
                }
            }
        }
    }else {con =false;
    return con;
    }
}
void imprimir(int n){
    int cad=0;
    for (int i=1;i<=n;i++){
        if (primos(i))cout <<i<<" ";
        cad+=i;
    }cout<<endl;
    cout<<cad;
}

int main(){
    int c;
    cout<<"ingrese un numero: ";
    cin>>c;
    
    imprimir(c);
    return 0; 
}