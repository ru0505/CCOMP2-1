#include <iostream>
#include "destroy.h"

using namespace std;


createanddestroy::createanddestroy(int ID, string messageString) :  objectID {ID},message{messageString}{
    cout <<"object"<< objectID << " contructor "<< message << endl;
}

createanddestroy::~createanddestroy(){
    cout << (objectID==1|| objectID == 6 ? "\n" : "");

    cout << "object " << objectID << " destructoor " << message <<endl;
}