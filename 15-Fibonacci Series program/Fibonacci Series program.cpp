#include <iostream>
#include <string>
using namespace std;
int main()
{
    //welcome 
    std::cout << "Hello to Fibonacci series program.\n";
    //declare variables
    int limit = 1, sum = 0, Num1 = 0, Num2 = 1;
    //char TryAgain = 'n';
    string TryAgain = "Yes";
    //NEVER put a ';' after a while or for loop or if or else statement
    while (TryAgain == "Yes" || TryAgain == "yes")
    {
        limit = 1, sum = 0, Num1 = 0, Num2 = 1;
        cout << "how many counts do you want?\n";
        cin >> limit;
        for (int i = 0; i < limit; i++)
        {

            //operation
            sum = Num1 + Num2;
            //swap variables
            Num1 = Num2;
            Num2 = sum;
            //print the sequence
            /*if (i == 0 || i == 1)
            {
                cout << i << " ,";
            }*/
            cout << sum << " ,";
        }
        cout << "\nDo you want to try again?\n" << "Choose Yes or No\n";
        cin >> TryAgain;
    }
}