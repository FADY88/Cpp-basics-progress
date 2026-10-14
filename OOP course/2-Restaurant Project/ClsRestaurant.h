#pragma once
#include <iostream>
#include "ClsUser.h"
using namespace std;
class Restaurant : public User
{
private:
  string Logo;
  string TaxCard;
  string Telephone;
public:
  void ShowOrder()
  {
    cout << "Show Orders from restaurant\n";
  }
  void DisplayInfo()
  {
    User::DisplayInfo();
    cout << "User Logo:     " << Logo << endl;
    cout << "User Tax Card: " << TaxCard << endl;
    cout << "User phone:    " << Telephone << endl;
  }
  void DeliverOrder()
  {

  }
  void ApproveOrder()
  {
    
  }
  Restaurant(string logo, string taxCard, string telephone,
    string name, string email, string phone) 
  : User(name, email, phone)
  {
    Logo = logo;
    TaxCard = taxCard;
    Telephone = telephone;
  }
    void ReceiveOrder()
  {
  }
  void SendOrder()
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