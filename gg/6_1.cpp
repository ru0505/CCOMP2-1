
#include <iostream>
#include <cmath>
using namespace std;

long cuadras(int n){
    long int a;
    for (int i=1;i<=n;i++){
        a += pow(i, 2);
    }return a;
}
long cuadrasum(int s){
    long int a;
    for (int i=1;i<=s;i++){
        a+=i;
    }long int tra=pow(a,2);
    return tra;
}

int main(){
    int c;
    cout<<"ingrese un numero: ";
    cin>>c;
    cout<<cuadras(c)<<endl;
    cout<<cuadrasum(c)<<endl;
    int m = cuadrasum(c);
    int h = cuadras(c);
    cout<<m-h<<endl;
    cout<<3025-385;
  return 0;
}