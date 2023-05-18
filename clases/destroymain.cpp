#include<iostream>
#include "destroy.h"
 using namespace std;

void create();

createanddestroy first{1, "(global before main)"};
int main (){
    cout<< "\n MAIN FUNTION : EXECUTION BEGINS" << endl;
    createanddestroy second{2,"(local in main)"};
    static createanddestroy third{ 3, "(local static in main)"};

    create();

    cout << "\n MAIN FUNTION: RECUTION RESUMES" << endl;
    createanddestroy fourth{4,"(local in create)"};
    cout << "\n MAINFUNTIN ; EXECUTION ENDS"<< endl;
}

void create(){
    cout << "\nCREATE FUNCION:EXECUTION BEGINS" << endl;
    createanddestroy fifth{5, "(local in create)"};
    static createanddestroy sixth { 6, "(local static in create)"};
    createanddestroy seventh {7, "local in create)"};
    cout << "FUNTION: EXECUTION ENDS" <<endl;
}


