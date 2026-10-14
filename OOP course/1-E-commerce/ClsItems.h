#pragma once
#include "ClsBrand.h"
#include "ClsCategory.h"
#include "ClsDataAccess.h"
#include <iostream>
using namespace std;
enum Colors
{
  White, Black, Red, Blue
};

class Item : public virtual DataAccess
{
private:
  int ItemId = 0;
  string ItemName = "Name";
  BRAND Brand;
  Category Category;
  float Price = 10;
  Colors Color;
  // static variable(don't change across all objects)
  // can't get default value in .h file just .cpp
  // static method is like static variable
  static int Counter;
  // protected : can be accessed by any class will inherit from this class
protected:
  float MainDiscount;
  void SetMainDiscount(float mainDiscount);
  float GetMainDiscount();

public:
// friend class
  friend class SpecialItem;
#pragma region Get and Set prototypes
  int GetCounter();
  
  void SetItemId(int id);
  int GetItemId();

  void SetItemName(string name);
  string GetItemName();


  void SetBrand(string brand);
  string GetBrand();

  void SetBrand(BRAND brand);
  BRAND Get_Brand();


  void SetCategory(string category);
  string GetCategory();

  void SetPrice(float price);
  float GetPrice();

  void SetColor(string color);
  string GetColor();

  void SetColor(Colors color);
  Colors GetColor_enum();

  virtual float GetDiscount();
#pragma endregion
#pragma region Abstract class implementation
  string GetById(int id);
  string GetData();
  bool Insert(string object);
  bool Update(string object);
  bool Delete(string object);
#pragma endregion

  // Constructor prototype and its overload
  Item(int id, string name, string brand, string category, float price, string color);
  Item();
  // Destructor prototype
  ~Item();
  float ChangePrice(float rate);

  // friend function
  friend void Display(Item friendItem);
};


class SpecialItem
{
public:
  void GetSpecialItemName(Item friendItem)
  {
    cout << friendItem.ItemName << friendItem.ItemId << endl;
  }
};