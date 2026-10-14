#include <iostream>
using namespace std;
class BRAND
{
private:
  int BrandId;
  string BrandName;
  string BrandAddress;
  string country;
  float MinPrice;
  float MaxPrice;

public:
  // suppose I implemented Set and Get functions for each variable
  void SetBrandName(string name);
  string GetBrandName();

  BRAND();
};