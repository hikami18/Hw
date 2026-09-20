#ifndef RAM_H
#define RAM_H

#include <iostream>
#include <cstring>
using namespace std;

class RAM
{
    char* type;
public:
    RAM(const char* t);
    RAM(const RAM& obj);
    ~RAM();
    void Print();
};

#endif
