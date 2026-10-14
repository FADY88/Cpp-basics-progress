#pragma once
#include <iostream>
#include "ClsUser.h"
using namespace std;
class Admin : public User
{
private:
  string JobName;

public:
  void ShowOrder()
  {
    cout << "Show Orders from admin\n";
  }
  void DisplayInfo()
  {
    User::DisplayInfo();
    cout << "User Job: " << JobName << endl;
  }
  void CancelOrder()
  {
  }
  void ContactUser()
  {
  }

  void Add()
  {
  }
  void Edit()
  {
  }
  void Delete()
  {
  }

  string Show()
  {
    return "";
  }
};