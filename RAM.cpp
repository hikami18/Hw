#include "RAM.h"

RAM::RAM(const char* t)
{
    type = new char[strlen(t) + 1];
    strcpy_s(type, strlen(t) + 1, t);
}

RAM::RAM(const RAM& obj)
{
    type = new char[strlen(obj.type) + 1];
    strcpy_s(type, strlen(obj.type) + 1, obj.type);
}

RAM::~RAM()
{
    delete[] type;
}

void RAM::Print()
{
    cout << "RAM type: " << type << endl;
}
