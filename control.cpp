#include <iostream>
using namespace std;


void intercambioo_ptr( int *p, int *q){
    int temp = *p;
    *p=*q;
    *q=temp;
}

int main (){
    int x=2;
    int y=3;
    intercambioo_ptr(&x,&y);
    cout<< x <<end;
    cout<< y;
    cout<<endl;
    return 0;
}