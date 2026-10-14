#include "ClsItems.h"

int Item::Counter = 0;

#pragma region Set and Get implementation
int Item::GetCounter()
{
  return Counter;
}

void Item::SetMainDiscount(float mainDiscount)
  {
    MainDiscount = mainDiscount;
  }
  float Item::GetMainDiscount()
  {
    return MainDiscount;
  }

void Item::SetItemId(int id)
{
  ItemId = id;
}
int Item::GetItemId()
{
  return ItemId;
}

void Item::SetItemName(string name)
{
  ItemName = name;
}
string Item::GetItemName()
{
  return ItemName;
}

void Item::SetBrand(string brand)
{
  Brand.SetBrandName(brand);
}
string Item::GetBrand()
{
  return Brand.GetBrandName();
}

void Item::SetBrand(BRAND brand)
{
  Brand = brand;
}

BRAND Item::Get_Brand()
{
  return Brand;
}

void Item::SetCategory(string category)
{
  Category.SetCategoryName(category);
}
string Item::GetCategory()
{
  return Category.GetCategoryName();
}

void Item::SetPrice(float price)
{
  Price = price;
}
float Item::GetPrice() // got override in Mobile class
{
  return Price;
}

void Item::SetColor(string color)
{
  if (color == "White")
    Color = White;
  else if (color == "Black")
    Color = Black;
  else if (color == "Red")
    Color = Red;
  else if (color == "Blue")
    Color = Blue;
}
string Item::GetColor()
{
  switch (Color)
  {
  case White:
    return "White";
    break;
  case Black:
    return "Black";
    break;
  case Red:
    return "Red";
    break;
  case Blue:
    return "Blue";
    break;
  default:
    return "Not Set";
    break;
  }
}
void Item::SetColor(Colors color)
{
  Color = color;
}
Colors Item::GetColor_enum()
{
  return Color;
}

float Item::GetDiscount()
{
  return 10;
}
#pragma endregion

#pragma region Abstract class implementation
  string Item::GetById(int id)
  {
    return "GetById";
  }
  string Item::GetData()
  {
    return "GetData";
  }
  bool Item::Insert(string object)
  {
    return true;
  }
  bool Item::Update(string object)
  {
    return true;
  }
  bool Item::Delete(string object)
  {
    return true;
  }
#pragma endregion
// class::ClassName() : default values by Constructor
Item::Item() : ItemName("Cell Phone")
{
  Counter++;
  Brand.SetBrandName("brand2");
  ItemId = 5;
  cout << "Welcome from Constructor\n";
}
Item::Item(int id, string name, string brand, string category, float price, string color)
{
  cout << "Welcome from stuffed Constructor\n";
  Counter++;
  // Assign the parameters to the data members
  ItemId = id;
  ItemName = name;
  Brand.SetBrandName(brand);
  Category.SetCategoryName(category);
  Price = price;
  SetColor(color);
}
// Destructor
Item::~Item()
{
  cout << "Good Bye item number " << GetItemId() << endl;
  Counter--;
}

float Item::ChangePrice(float rate)
{
  return Price * rate;
}
