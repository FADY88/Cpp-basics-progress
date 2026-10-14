#include <iostream>
using namespace std;
void message(string sentence)
{
    cout << "***************************************\n";
    cout << sentence << "\n";
    cout << "***************************************\n";
}
float Addition(float Value1, float Value2)
{
    float sum = Value1 + Value2;
    cout << "The sum is ";
    return sum;
}
float Subtraction(float Value1, float Value2)
{
    float difference = Value1 - Value2;
    cout << "The difference is ";
    return difference;
}
float Division(float Value1, float Value2)
{
    float quotient = Value1 / Value2;
    cout << "The quotient is ";
    return quotient;
}
float Multiplication(float Value1, float Value2)
{
    float product = Value1 * Value2;
    cout << "The product is ";
    return product;
}
int main()
{
    // welcome user and declare variables
    message("Welcome to calculator program.");
    float Value1 = 0, Value2 = 0;
    char Oper = '+';
    // While loop for reuse the app
    char Again = 'y';
    while (Again == 'y' || Again == 'Y')
    {
        // declare value1 and take it
        message("Please enter the first value.");
        cin >> Value1;
        // declare operator and take it
        message("Choose an operator (+, -, *, /)");
        cin >> Oper;
        // declare value2 and take it
        message("Please enter the second value.");
        cin >> Value2;
        // output with if_else statement
        if (Oper == '+')
        {
            cout << Addition(Value1, Value2);
        }
        else if (Oper == '-')
        {
            cout << Subtraction(Value1, Value2);
        }
        else if (Oper == '*')
        {
            cout << Multiplication(Value1, Value2);
        }
        else if (Oper == '/')
        {
            cout << Division(Value1, Value2);
        }
        else
            cout << "Sorry invalid operator, try another one.\n";
        // output with switch statement
        switch (Oper)
        {
        case '+':
            cout << Addition(Value1, Value2);
            break;
        case '-':
            cout << Subtraction(Value1, Value2);
            break;
        case '*':
            cout << Multiplication(Value1, Value2);
            break;
        case '/':
            cout << Division(Value1, Value2);
            break;
        default:
            cout << "Sorry invalid operator, try another one.\n";
            break;
        }
        cout << "\nDo you want to try again? (y/n)\n";
        cin >> Again;
    }
}