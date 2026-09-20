#include <iostream>
#include "Laptop.h"
using namespace std;

int main()
{
    cout << "Laptop count: " << Laptop::count << endl;

    Laptop laptop1("ASUS ROG", 1500, "Intel i7", "Kingston", "RTX 3060", "DDR5");
    laptop1.Print();

    cout << "\nLaptop count: " << Laptop::count << endl;

    cout << "\n--- Copying laptop1 to laptop2 ---" << endl;
    Laptop laptop2 = laptop1;
    laptop2.Print();

    cout << "\nLaptop count: " << Laptop::count << endl;

    return 0;
}
