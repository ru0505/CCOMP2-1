#include <iostream>
#include <stdexcept>
#include "clas.h"

using  namespace std;


void display(const string & message,const Time & time){
    cout << message << "\n universal time: "<<time.universalstring()<<"\n tiempo estandar: "<<time.string()<<"\n\n";
}

int main(){
    time t;
    displayTime ("tiempo inicial:", t);

    t.steTime (13,27,6);
    displayTime("after settime: ",t);

    try {
        t.setTime(99,99,99);
    } 
    catch(invalid_argument&e){
        cout<< "exception: "<<e.what()<< "\n\n";
    }

    displayTime("after attermpting to set an invalid time: ",t);
}
