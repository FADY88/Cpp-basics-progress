#include <iostream>
using namespace std;
int main()
{
    // Declaring an array
    int numberGroup[5] = {1, 2, 3, 4};
    double numberGroup2[5]{};
    char characterGroup[5]{};
    string stringGroup[5]{};
    // Using a member in an array
    // Array's name , index of a variable
    cout << numberGroup[0] << "\n";
    numberGroup[0] = 9;
    cout << numberGroup[0] << "\n";
    // Any variable in an array has value of zero unless you put another value in it
    cout << numberGroup[2] * numberGroup[4] << "\n";
    // You CAN'T put a variable as an index in an array unless it's constant
    const int ArrayLength = 6;
    int NewArray[ArrayLength]{};
    // Taking values of an array from user in a loop
    int numbers[5]{};
    for (int i = 0; i < 5; i++)
    {
        cout << "Please enter a number\n";
        cin >> numbers[i];
    }
    // Printing Values of an array using a loop
    for (int i = 0; i < 5; i++)
    {
        if (0 <= i && i < 4)
            cout << numbers[i] << " , ";
        else
            cout << numbers[i];
    }
}