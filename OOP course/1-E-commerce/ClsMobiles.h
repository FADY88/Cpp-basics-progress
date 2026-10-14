#include "ClsItems.h"
#include <iostream>
using namespace std;
// inheritance from Item to Mobile
class Mobile : public Item, public virtual DataAccess
{
private:
  float Height;
  float Width;
  float weight;
  float ScreenSize;
  float Discount;

public:
  float GetDiscount()
  {
    return 15;
  }
  // Function override : replaces a function with same
  // signature in class this class inherited from
  float GetPrice() 
  { 
    // return GetPrice() * Discount / 100; infinite recursive function
    return Item::GetPrice() * Discount / 100;
  }
  // Function overload : two functions with deferent parameters
  float GetPrice(float rate) 
  {
    return Item::GetPrice() * Discount / 100 * rate;
  }
  // you can chose which constructor you want to call
  Mobile(int ItemId, float ItemPrice)
    : Item(ItemId, "s", "brand", "category", ItemPrice, "white")
  {
    cout << "Welcome from Mobile Constructor\n";
  }
  Mobile()
  {
    cout << "Welcome from Mobile Constructor\n";
  }
  ~Mobile()
  {
    cout << "Good bye from Mobile Destructor\n";
  }
  #pragma region Abstract class implementation
  string GetById(int id)
  {
    return "GetById";
  }
  string GetData()
  {
    return "GetData";
  }
  bool Insert(string object)
  {
    return true;
  }
  bool Update(string object)
  {
    return true;
  }
  bool Delete(string object)
  {
    return true;
  }
#pragma endregion
};