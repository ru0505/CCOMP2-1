#include <iostream>

using namespace std;

int conta(string cad){
    int conta =0;
    for (int i=0;i< cad.length();i++){
        if (cad.at(i)>= 49 && cad.at(i) <=57)
            conta ++;
    }
    return conta;
}
int main(){
    string no;
    cout<< "ingrese una cadena: ";
    cin>>no;

    cout<< conta(no)<<endl;
    return 0;
}
    