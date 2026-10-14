#include <iostream>
using namespace std;
bool Search(int numbers1[10], float number1)
{
    for (int i = 0; i < 10; i++)
    {
        if (numbers1[i] == number1)
            return true;
    }
    return false;
}
int main()
{
    //Welcome user
    cout << "Hello to array search\n";
    //Declare an array
    int numbers[10]{};
    //Retry the app
    //Take array values from user 
    for (int i = 0; i < 10; i++)
    {
        cout << "Please enter number " << i + 1 << " of the set.\n";
        cin >> numbers[i];
    }
    cout << "Please enter a number to search for.\n";
    float number = 0;
    cin >> number;
    bool result = Search(numbers, number);
    if (result)
        cout << "The number was found.\n";
    else
        cout << "The number was NOT found.\n";
}