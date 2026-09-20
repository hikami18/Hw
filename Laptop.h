#ifndef LAPTOP_H
#define LAPTOP_H

#include "CPU.h"
#include "SSD.h"
#include "GPU.h"
#include "RAM.h"

class Laptop
{
private:
    char* model;
    double price;

    CPU cpu;
    SSD ssd;
    GPU gpu;
    RAM ram;

public:
    static int count; // Статичне поле

    Laptop(const char* m, double p, const char* cpuName, const char* ssdBrand, const char* gpuName, const char* ramType);
    Laptop(const Laptop& obj);
    ~Laptop();

    void Print();
};

#endif
