#ifndef SSD_H
#define SSD_H

#include <iostream>
#include <cstring>
using namespace std;

class SSD
{
    char* brand;
public:
    SSD(const char* b);
    SSD(const SSD& obj);
    ~SSD();
    void Print();
};

#endif
