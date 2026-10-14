#include <iostream>
using namespace std;
int main()
{
    // welcome message and ask for a variable
    cout << "Welcome to even and odd checker.\n";
    cout << "please enter an integer number.\n";
    // declare variable and take it from user
    int Input = 0, Checker = 0;
    cin >> Input;
    // reminder operation
    Checker = Input % 2;
    // if-else
    if (Checker == 0)
    {
        cout << "The entered number is even.";
    }
    else
    {
        cout << "The entered number is odd.";
    }
}
