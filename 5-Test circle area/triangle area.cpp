#include <iostream>
using namespace std;
int main()
{
    //welcome user and know their name
    cout << "Welcome to calculating area of a Triangle.\n" << "What is your name? \n";
    string UserName = "add";
    cin >> UserName;
    UserName = "Mr." + UserName;
    cout << "Good to see you " << UserName << "\n";
    //declare variables and ask for them
    double SideLength = 0, Height = 0;
    cout << "Enter the length of one side of your triangle.\n";
    cin >> SideLength;
    cout << "And the height of your triangle.\n";
    cin >> Height;
    //the operation
    double TriangleArea = 0;
    TriangleArea = (Height * SideLength) / 2;
    //give output to the user
    cout << "The area of your triangle is " << TriangleArea << "\n";
    cout << "Thanks " << UserName << " for using the App";
}