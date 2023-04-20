#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

void  pa(int x, int arr[]){
   int x;
   if (arr[x]){
         for(int v=1;v<x;v++ ){
            if ((arr[v]== x%10) && (arr[v]== x%100)){
               cout<< "si es palindromo";
            }else {
               cout << "no es palindromo";
            }
         }
   }
}    


int main(){
   int c;
   cout<<"ingrese un numero ";
   cin>>c;
   int arr[]={1,2,3,2,1};
   cout << pa(c,arr);
   return 0;
}
    
