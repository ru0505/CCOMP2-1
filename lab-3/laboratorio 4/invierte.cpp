#include <iostream>
using namespace std;


void swap (int &a, int &b){
    int x=a;
    a=b;
    b=x;
}


void imprimir( int a,int b){
	
	   cout <<a << "  " << b;
	
}

void invertir(int arr[],int tam){
        for (int i =0; i < tam /2; i++){
            int temporal=arr[i];
            arr[i]= arr[tam-i-1];
            arr[tam-i-1]=temporal;
        }
}
void imvertirrec(int arr[], int tam, int temporal=0){
    if(temporal>tam)
        return;      
        
        imvertirrec(arr,tam -1,temporal+1);
}   

void imprimir_r(const int arr[],int tam){
	for (int i=0; i < tam;i++){
	   cout << " " << arr [i];
	}

}
int main(){
    int a,b;
    int arr[4]={0,1,2,3};
    int ba=4;
    a=9;
    b=6;
    swap(a,b);
    imprimir(a,b);
    cout<< endl;
    invertir(arr,ba );
    imprimir_r(arr,ba);
    cout<< "  ";
    imvertirrec(arr,ba);
    imprimir_r(arr,ba);
    return 0;
}
