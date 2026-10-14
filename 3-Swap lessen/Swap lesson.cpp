#include <iostream>
#include <string>

int main()
{
    //tips 
    auto varint = 9;
    auto varfloat = 1.3;
    auto varbool = false;
    //tips
    std::cout << "please enter value 1\n";
    double var1 = 4;
    std::cin >> var1;

    std::cout << "please enter value 2\n";
    double var2{ 8 };
    std::cin >> var2;

    std::cout << "variable 1 is " << var1 << "\n";
    std::cout << "variable 2 is " << var2 << "\n" << "\n" << "\n";
    // swap trick
    auto var3{ 0 };

    var3 = var1;
    var1 = var2;
    var2 = var3;
    // swap trick
    std::cout << "And after swapping the variables.\n";
    std::cout << "variable 1 is " << var1 << "\n";
    std::cout << "variable 2 is " << var2 << "\n";
}