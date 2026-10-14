#include <iostream>
using namespace std;
int main()
{
    // welcome user
    cout << "Welcome dear user.\n"
         << "What is your name?\n";
    string UserName = "a";
    cin >> UserName;
    cout << "Welcome " << UserName << ".\n";
    // declare variables and ask for them
    double r = 0;
    cout << "Enter the radius of yor circle please. \n";
    cin >> r;
    /*
    new things will be learned
    if , == , != , > , < , <= , >=
    */
    if (r <= 0)
    {
        cout << "The radius of a circle can't be zero or a negative number.\n";
    }
    else
    {
        // declare constants and variables
        double CircleArea = 0, circumference = 0;
        const double pi = 3.14159265359;
        // the operation
        CircleArea = pi * (r * r);
        circumference = 2 * pi * r;
        // print output and say goodbye
        cout << "The area of your circle is " << CircleArea << "\n";
        cout << "And the circumference of your circle is " << circumference << "\n";
        cout << "Thank you " << UserName << " for using the app.";
    }
    // new things will be learned
}