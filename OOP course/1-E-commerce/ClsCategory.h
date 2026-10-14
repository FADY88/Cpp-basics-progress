#include <iostream>
using namespace std;
class Category
{
private:
  int CategoryId;
  string CategoryName;
  int MinLimit;

public:
  void SetCategoryId(int id);
  int GetCategoryId();
  void SetMinLimit(int minLimit);
  int GetMinLimit();

  void SetCategoryName(string Name);
  string GetCategoryName();
};