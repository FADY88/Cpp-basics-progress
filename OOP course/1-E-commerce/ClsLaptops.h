#include <iostream>
#include "ClsMobiles.h"
using namespace std;
// multi inheritance with comma
class Laptop : public Mobile, public BRAND
{
private:
  float ProcessorSpeed;
  int RamSize;
  string GPU;

public:
  int GetRamSize()
  {
    return RamSize;
  }
  float GetPrice()
  {
    return Mobile::GetPrice(30); 
  }
  // Chose which constructor to call
  Laptop(int ItemId, float ItemPrice) : Mobile(ItemId, ItemPrice)
  {
    cout << "Welcome from Laptop Constructor\n";
  }
  // Choosing constructor while doing multi inheritance
  Laptop() : Mobile(17, 2.5) , BRAND()
  {
    cout << "Welcome from Laptop Constructor\n";
  }
  ~Laptop()
  {
    cout << "Good bye from Laptop Destructor\n";
  }
};