
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //welcome to user
    cout << "Hello user!, Welcome to calculating the average of 5 numbers.\n";
    //ask for their name
    cout << "What is your name?\n";
    //declare a string variable 
    string user1 = "username";
    //get their name and add Hi to it
    getline (cin, user1);
    user1 = "Hi " + user1;
    //welcome user by their name and ask about the set of numbes
    cout << user1 << "\n" << "Please enter the set of numbers you want to get the average of.\n";
    //declare 5 variables
    float num1 = 1, num2 = 1, num3 = 1, num4 = 1, num5 = 1;
    double result = 1;
    //get the 5 variables
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    //the magic happens here
    result = (num1 + num2 + num3 + num4 + num5) / 5;
    //print the result 
    cout << "The average of the entered set is " << result;
}