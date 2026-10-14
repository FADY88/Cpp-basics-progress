#pragma once
#include <iostream>
#include "ClsUser.h"
using namespace std;
class Client : public User
{
private:
  int FlatNo;
  int FloorNo;
  string SecondPhone;
  float DeliveryLocation;

public:
  Client(int flat, int floor, string secondPhone, float deliveryLocation,
    string name, string email, string phone) 
  : User(name, email, phone)
  {
    FlatNo = flat;
    FloorNo = floor;
    SecondPhone = secondPhone;
    DeliveryLocation = deliveryLocation;
  }
  void ShowOrder()
  {
    cout << "Show Orders from client\n";
  }


  void DisplayInfo()
  {
    User::DisplayInfo();
    cout << "User flat number:  " << FlatNo << endl;
    cout << "User floor number: " << FloorNo << endl;
    cout << "User second phone: " << SecondPhone << endl;
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