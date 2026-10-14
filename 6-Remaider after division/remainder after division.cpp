#include <iostream>
using namespace std;
int main()
{
    //welcome user 
    cout << "Hello World!\n";
    cout << "Please enter 2 numbers\n";
    //declare variables and take them from user
    int var1{ 0 }, var2{ 0 }, var3 = 0;
    cin >> var1 >> var2;
    // make the operation
    var3 = var1 % var2;
    // display output
    cout << var3 << "\n";
}