#include <iostream>
using namespace std;
//return value   function name  all parameters in parentheses
void x(int Y, char option, float Number, long newNumber)
{
    cout << "\nx function\n";
    cout << "\n" << Y << option << Number << newNumber;
}
//pass by value and pass by reference
float y(float& Num)
{
    float sum = 0;
    cout << "y function\n";
    sum = Num + 3;
    return sum;
}
int main()
{
    // you can set a default value in function's parameter 
    long Num1 = 0;
    cout << "\nPlease enter a number.\n";
    cin >> Num1;
    x(2, 'h', 2.5, Num1);
    float newNum = 5;
    cout << "\nPlease enter another number.\n";
    cin >> newNum;
    cout << y(newNum);
    cout << "\n" << newNum;
}