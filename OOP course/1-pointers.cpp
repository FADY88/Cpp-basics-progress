#include <iostream>
using namespace std;

// new -> give memory to pointer without making a variable
// delete -> delete a pointer from the memory
int main()
{
  cout << "welcome to our program\n";
  // int x, y;
  cout << "enter your values\n";
  int *a = new int, *b = new int;
  cin >> *a >> *b;
  // pointers' declaration and initialization
  // int *a = &x, *b = &y;

  cout << "result: " << *a * *b << endl;
  delete a, b;
}