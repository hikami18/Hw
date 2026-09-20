#include "CPU.h"

CPU::CPU(const char* m)
{
    model = new char[strlen(m) + 1];
    strcpy_s(model, strlen(m) + 1, m);
}

CPU::CPU(const CPU& obj)
{
    model = new char[strlen(obj.model) + 1];
    strcpy_s(model, strlen(obj.model) + 1, obj.model);
}

CPU::~CPU()
{
    delete[] model;
}

void CPU::Print()
{
    cout << "CPU model: " << model << endl;
}
