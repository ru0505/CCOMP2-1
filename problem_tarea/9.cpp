#include <iostream>
using namespace std;

int main(){
    
    int n=0;
    int e=6;
    int c=3;

    cout<<"el cubo"<< "      "<<"superficie"<<"      "<<"volumen"<<endl;
    cout<<"  "<< n <<"              "<<e*(n*n)<<"              "<<(n*n*n)<<endl;
    cout<<"  "<<(n+1)<<"              " << e*((n+1)*(n+1))<<"              "<<((n+1)*(n+1)*(n+1))<<endl;
    cout<<"  "<<(n+2)<<"             " << e*((n+2)*(n+2))<<"              "<<((n+2)*(n+2)*(n+2))<<endl;
    cout<<"  "<<(n+3)<<"             " << e*((n+3)*(n+3))<<"              "<<((n+3)*(n+3)*(n+3))<<endl;
    cout<<"  "<<(n+4)<<"             " << e*((n+4)*(n+4))<<"              "<<((n+4)*(n+4)*(n+4))<<endl;

    return 0;
}