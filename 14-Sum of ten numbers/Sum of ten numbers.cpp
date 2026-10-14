#include <iostream>
using namespace std;
int main()
{
    //int sum = 0;
    //for (int count = 1; count <= 10; count += 1)
    //{
    //    cout << " \n loop index is " << count;
    //    sum = sum + count;
    //    cout << " \n now the sum is " << sum;
    //}
    //cout << "\n \n \n the total sum is " << sum;

    std::cout << "Welcome to sum ten numbers program\n";

    int sum = 0;
    for (int count = 1; count <= 5; count += 1)
    {
        int UserInput = 0;
        cout << "\n Please enter a new number\n";
        cin >> UserInput;
        cout << " \n loop index is " << count;
        cout << " \n User input is " << UserInput;
        sum = sum + UserInput;
        cout << " \n now the sum is " << sum;
    }
    cout << "\n \n \n the total sum is " << sum;

    
}