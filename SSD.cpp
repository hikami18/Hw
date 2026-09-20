#include "SSD.h"

SSD::SSD(const char* b)
{
    brand = new char[strlen(b) + 1];
    strcpy_s(brand, strlen(b) + 1, b);
}

SSD::SSD(const SSD& obj)
{
    brand = new char[strlen(obj.brand) + 1];
    strcpy_s(brand, strlen(obj.brand) + 1, obj.brand);
}

SSD::~SSD()
{
    delete[] brand;
}

void SSD::Print()
{
    cout << "SSD brand: " << brand << endl;
}
