#include <iostream>
using namespace std;
int main()
{
    //welcome user and ask for values
    cout << "Welcome to calculator program.\n";
    //declare value1 and take it
    cout << "Please enter the first value.\n";
    float Value1 = 0, Value2 = 0;
    cin >> Value1;
    //declare operator and take it
    cout << "Choose an operator (+, -, *, /)\n";
    char Oper = '+';
    cin >> Oper;
    //declare value2 and take it
    cout << "Please enter the second value.\n";
    cin >> Value2;
    //output with if_else statement
   /* if (Oper == '+')
    {
        cout << "The sum is " << Value1 + Value2;
    }
    else if (Oper == '-')
    {
        cout << "The difference is " << Value1 - Value2;
    }
    else if (Oper == '*')
    {
        cout << "The product is " << Value1 * Value2;
    }
    else if (Oper == '/')
    {
        cout << "The quotient is " << Value1 / Value2;
    }
    else
        cout << "Sorry invalid operator, try another one.";*/
    //output with switch statement
    switch (Oper)
    {
    case'+':
        cout << "The sum is " << Value1 + Value2;
        break;
    case'-':
        cout << "The difference is " << Value1 - Value2;
        break;
    case'*':
        cout << "The product is " << Value1 * Value2;
        break;
    case'/':
        cout << "The quotient is " << Value1 / Value2;
        break;
    default:
        cout << "Sorry invalid operator, try another one.";
        break;
    }
}