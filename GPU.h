#ifndef GPU_H
#define GPU_H

#include <iostream>
#include <cstring>
using namespace std;

class GPU
{
    char* name;
public:
    GPU(const char* n);
    GPU(const GPU& obj);
    ~GPU();
    void Print();
};

#endif
