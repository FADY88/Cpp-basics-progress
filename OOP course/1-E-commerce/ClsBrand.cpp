#include "ClsBrand.h"
#include <iostream>
using namespace std;

void BRAND::SetBrandName(string name)
{
  BrandName = name;
}
string BRAND::GetBrandName()
{
  return BrandName;
}
BRAND::BRAND()
{
  cout << "Welcome from BRAND constructor\n";
}