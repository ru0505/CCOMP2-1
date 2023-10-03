#include <iostream>
#include <cstdlib>
using namespace std;



int main(){
    int x =8;
    int y =6;
    div_t result= div(x,y);

cout<< "el cociente es : "<< result.quot << "\n"<< "y el resto es: " << result.rem <<endl;
return 0;
}