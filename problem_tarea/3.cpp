#include <iostream>
#include <string>
using namespace std;

int main(){

    int num1,num2,num3,num4,num5;
    cout<< "ingrese 5 numeros: ";
    cin >>num1>>num2>>num3>>num4>>num5;

    int max = num1;
    int min = num1;

    if (max <= num2){
        max = num2;
    }else{
        
    }
        
        
        
        
        if (min >= num2){
        min = num2;
        if (min >= num3){
            min = num3;
            if(min >= num4){
                min = num4;
                if(min >= num5){
                    min = num5; 
                    
                }
            }
        }

    }
    cout<<"el mayor es "<<max<<endl;
    cout<<"el menor es "<<min<<endl;
    return 0;
}