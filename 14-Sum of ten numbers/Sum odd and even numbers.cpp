#include <iostream>
using namespace std;
int main()
{
    //welcome user
    cout << "Welcome to odd and even sum program.\n";
    int OddSum = 0, EvenSum = 0, count = 1, limit = 0;
    cout << "How many counts do you wish?\n";
    cin >> limit;
    for (count; count <= limit; count++)
    {
        cout << "\nPlease enter a number.\n";
        int UserInput = 0;
        cin >> UserInput;
        //Even situation
        if (UserInput % 2 == 0)
        {
            cout << "The number is even.\n";
            EvenSum = EvenSum + UserInput;
            cout << "User input is " << UserInput << "\n";
            cout << "the even numbers sum is " << EvenSum << "\n";
        }
        else
        {
            cout << "The number is odd.\n";
            OddSum = OddSum + UserInput;
            cout << "User input is " << UserInput << "\n";
            cout << "the odd numbers sum is " << OddSum << "\n";
        }
    }
    cout << "The odd numbers sum is " << OddSum << "\n";
    cout << "The even numbers sum is " << EvenSum << "\n";
}