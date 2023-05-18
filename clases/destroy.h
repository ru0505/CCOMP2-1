#include <string>

#ifndef CREATE_H
#define CREATE_H

class createanddestroy{
public:
    createanddestroy(int, std::string);
    ~createanddestroy();
private:
    int objectID;
    std::string message;
};
#endif