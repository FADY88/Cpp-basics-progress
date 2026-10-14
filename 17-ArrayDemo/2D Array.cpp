#include <iostream>
using namespace std;
void ArraySum(int marks[6][2])
{
    int AllSum = 0, rowsSum = 0;
    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 2; c++)
        {
            AllSum += marks[r][c];
            rowsSum += marks[r][c];
        }
        cout << "Sum of row " << r + 1 << " is " << rowsSum << "\n";
        rowsSum = 0;
    }
    cout << "\nThe all sum is " << AllSum << "\n";
}
int main()
{
    cout << "Hello World!\n";
    // Declaring a 2d array
    // Data type  name  rows  columns
    int marks[6][2]{{10, 20}, {80, 90}};
    // Putting values in 2d array cells
    marks[1][2] = 60;
    // take values for a 2d array using a loop
    for (int rows = 0; rows < 6; rows++)
    {
        for (int columns = 0; columns < 2; columns++)
        {
            cout << "Please enter data in row " << rows + 1 << " and column " << columns + 1 << "\n";
            cin >> marks[rows][columns];
        }
    }
    // Printing values in a 2d array
    for (int rows = 0; rows < 6; rows++)
    {
        for (int columns = 0; columns < 2; columns++)
        {
            cout << "Data in row " << rows + 1 << " and column " << columns + 1 << " is " << marks[rows][columns] << "\n";
        }
        cout << "\n";
    }
    ArraySum(marks);
}
