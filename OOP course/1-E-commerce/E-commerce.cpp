#include <iostream>
#include "ClsHelper.h"
#include "ClsLaptops.h" // ClsMobiles.h -> ClsItems.h
// #include "ClsItems.h" // ClsCategory.h, ClsBrand.h, ClsDataAccess.h
using namespace std;

// friend function can access any private variable in class
void Display(Item friendItem)
{
  cout << friendItem.ItemName << friendItem.ItemId << endl;
}

int main()
{
  cout << "E-commerce app\n";
#pragma region class Example
  // if I put parameters in class Constructor
  Item phone[4];

  // phone1.SetPrice(6);
  for (int i = 0; i < 3; i++)
  {
    phone[i].SetItemId(i + 1);
  }

  phone[3] = Item(4, "s22", "samsung", "phone", 5000, "black");
  cout << phone[0].GetPrice() << endl;
  cout << phone[1].GetItemName() << endl;
  // passing object to constructor to copy old to new
  Item phone1(phone[2]);
  cout << "copy by passing an object to constructor ";
  cout << phone1.GetItemId() << endl;
  //
  BRAND samsung;
  samsung.SetBrandName("Samsung");

  phone[3].SetBrand(samsung);
  phone[3].SetColor("white");
  for (int i = 0; i < 4; i++)
  {
    cout << phone[i].GetCounter() << endl;
  }
  cout << phone1.GetCounter() << endl;
  cout << "==================\n";
  // static variables and methods don't need object to be accessed
  Helper::UserId = 1;
  Helper::UserName = "Fady";
  Helper::helperFunction();
  Helper obj;
  obj.test = 1;
  cout << Helper::UserName << " is number " << obj.test << endl;
  cout << "==================\n";
  cout << "inheritance\n";
  Mobile myMobile;
  cout << myMobile.GetDiscount() << endl;
  cout << myMobile.GetPrice() << endl;
  Laptop myLap;
  cout << myLap.GetRamSize() << endl;
  cout << myLap.GetColor() << endl;
  cout << "Choosing Constructor\n";
  cout << "Multi inheritance\n";
  Laptop lap(5, 3.3);
  lap.Mobile::GetPrice();
  cout << "==================\n";
#pragma endregion class example
  cout << "Dynamic polymorphism and Virtual methods\n";
  cout << "press 1 for mobile, 2 for laptop, any key for any item\n";
  int nItemType = 0;
  cin >> nItemType;
  Item *ItemObj = new Item;
  if (nItemType == 1)
    ItemObj = new Mobile;
  else if (nItemType == 2)
    ItemObj = new Laptop;
  cout << ItemObj->GetDiscount() << endl;

  cout << "friend functions and methods\n";
  Item item;
  item.SetItemName("Dell 5530");
  item.SetItemId(7);
  Display(item);
  SpecialItem SpecialItem;
  SpecialItem.GetSpecialItemName(item);
}