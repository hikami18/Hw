#include "GPU.h"

GPU::GPU(const char* n)
{
    name = new char[strlen(n) + 1];
    strcpy_s(name, strlen(n) + 1, n);
}

GPU::GPU(const GPU& obj)
{
    name = new char[strlen(obj.name) + 1];
    strcpy_s(name, strlen(obj.name) + 1, obj.name);
}

GPU::~GPU()
{
    delete[] name;
}

void GPU::Print()
{
    cout << "GPU name: " << name << endl;
}
