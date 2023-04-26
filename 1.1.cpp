#include <cstdlib>
#include <iostream>
using namespace std;

bool Itera_Palindromo(int x[], int tam) {
    int a{0};
    for (int i{0}; a != tam / 2 + 1; i++) {
        a = x[i];
        int k = x[i];          
        int j = x[tam - (i + 1)]; 
        if (k == j) {
            continue;
        }
        else {
            return false;
        }
    }
    return true;
}
int palin_recur(int x[],int y){

}


int main() {
    int a[] = { 1, 2, 3, 2, 1 };
    int tam = sizeof(a) / sizeof(a[0]);
    if (Itera_Palindromo(a, tam)==1){
        cout<<"es palindromo"<<endl;
    }else{
        cout<<"no es palindromo"<<endl;
    }
    return 0;
} 
