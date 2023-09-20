#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"ingrese un numero: ";
    cin>>n;

    int n1,n2,n3,fib,m;
    n2=n3=fib=1;
    n1=m=0;
        if ((n==0)||(n==1)){
            cout << "el fibonaci se "<< n << "es "<< 1 << endl;
        }else{
            for (int i =0; i <n ; i++){
                fib = n1 +n2;
                
                cout<<fib<<" ";
                n1=n2;
                n2=fib;
                if ((n%2)=0){
                    fib=n2+fib;
                }
            }


        }
    return 0;
}