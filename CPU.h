#ifndef CPU_H
#define CPU_H

#include <iostream>
#include <cstring>
using namespace std;

class CPU
{
    char* model;
public:
    CPU(const char* m);
    CPU(const CPU& obj);
    ~CPU();
    void Print();
};

#endif
