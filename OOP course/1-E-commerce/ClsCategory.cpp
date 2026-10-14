#include "ClsCategory.h"
#include <iostream>
using namespace std;

void Category::SetCategoryId(int id)
{
  CategoryId = id;
}
int Category::GetCategoryId()
{
  return CategoryId;
}
void Category::SetMinLimit(int minLimit)
{
  MinLimit = minLimit;
}
int Category::GetMinLimit()
{
  return MinLimit;
}

void Category::SetCategoryName(string Name)
{
  CategoryName = Name;
}
string Category::GetCategoryName()
{
  return CategoryName;
}