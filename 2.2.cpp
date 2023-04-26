
#include <iostream>
using namespace std;

void ret(int y[], int x) {
    int a=0;
    for (int i=0; i<x ; i++) {
        a = y[i];        
        int u = y[x-i]; 
        int x= y[u];
        y[i]=x;
        y[u]=a;
    }
    return ;
}


int main() {
    int a[] = { 1, 2, 3, 2, 1 };
    int tam = sizeof(a);
    ret(a,tam);
    return 0;
} 
