#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"escriba un numero: ";
    cin>>a;
    if (a != 1 && a!=0){
        for (int  i =2;i <=a;i++){
            if(a%i ==0){
                
                continue;
           } else{
                cout << i << " ";
                }
            
        }
    }
    
    return 0;

} 

