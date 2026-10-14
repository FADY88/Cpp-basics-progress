#include <iostream>
using namespace std;

class Rectangle
{
public:
  // Features(variables)
  float length = 0;
  float width = 0;
  // Behaviors(methods)
  float Area()
  {
    return length * width;
  }
  float Perimeter()
  {
    return (length + width) * 2;
  }
};

int main()
{
  cout << "Hello, Object Oriented Programming\n";
  Rectangle myRectangle;
  myRectangle.length = 5;
  myRectangle.width = 7;
  cout << "Area: " << myRectangle.Area() << endl;
  cout << "Perimeter: " << myRectangle.Perimeter() << endl;
}