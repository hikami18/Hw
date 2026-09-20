#include "Laptop.h"

int Laptop::count = 0;

Laptop::Laptop(const char* m, double p, const char* cpuName, const char* ssdBrand, const char* gpuName, const char* ramType)
    : price(p), cpu(cpuName), ssd(ssdBrand), gpu(gpuName), ram(ramType)
{
    model = new char[strlen(m) + 1];
    strcpy_s(model, strlen(m) + 1, m);
    count++;
}

Laptop::Laptop(const Laptop& obj)
    : price(obj.price), cpu(obj.cpu), ssd(obj.ssd), gpu(obj.gpu), ram(obj.ram)
{
    model = new char[strlen(obj.model) + 1];
    strcpy_s(model, strlen(obj.model) + 1, obj.model);
    count++;
}

Laptop::~Laptop()
{
    delete[] model;
    count--;
}

void Laptop::Print()
{
    cout << "Laptop model: " << model << ", Price: " << price << endl;
    cpu.Print();
    ssd.Print();
    gpu.Print();
    ram.Print();
}
