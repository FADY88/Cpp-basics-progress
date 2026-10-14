#include <iostream>

using namespace std;
int main()
{
    // Welcome user, give me 2 numbers
    cout << "Welcome to a very basic calculator.\n";
    cout << "Enter 2 numbers here please.\n";
    int Num1{0}, Num2{0};
    cin >> Num1 >> Num2;
    // Perform operations and be in Outputs' hell
    cout << "The sum of the 2 values is " << Num1 + Num2 << "\n";
    cout << "The subtract of the 2 values is " << Num1 - Num2 << "\n";
    cout << "The multiply of the 2 values is " << Num1 * Num2 << "\n";
    cout << "The division of the 2 values is " << Num1 / Num2 << "\n";
    cout << "The division of the 2 values is " << Num1 % Num2 << "\n";
}