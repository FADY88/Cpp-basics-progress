#include <iostream>
using namespace std;

struct cart
{
  // I can give each variable a Default Value
  int carId = 1;
  string carName = "Default Car name";
  int year = 0000;
  float price = 0;
  // I can declare methods in my struct
  void PriceChange(float new_price)
  {
    price = new_price;
  }
};

int main()
{
  cart cars[3];
  for (int i = 0; i < 3; i++)
  {
    cout << "Car number " << i + 1 << endl;
    cout << "car's name: ";
    cin >> cars[i].carName;
    cout << "car's ID: ";
    cin >> cars[i].carId;
    cout << "car's manufacturing year: ";
    cin >> cars[i].year;
    cout << "car's price: ";
    cin >> cars[i].price;
  }

  cout << cars[1].price << endl;
  cars[1].PriceChange(1234);
  cout << cars[1].price << endl;
  cart *pCar = &cars[1];
  
  pCar->PriceChange(1200);
  cout << cars[1].price << endl;
  // (*pCar).carId = 5;
  pCar->price = 5;
  cout << cars[1].price << endl;
}