#pragma once
#include <iostream>
#include "ClsRepository.h"
using namespace std;
class User : public Repository
{
private:
  int Id;
  string Name;
  string Email;
  string Password;
  string Phone;
  string City;
  float Location;
public:
  // final methods can't be overridden
  // and it made this class an abstract class
  virtual void Login(string email, string password) final
  {
    cout << "user logged in\n";
  }
  virtual void ShowOrder() = 0;

  void DisplayInfo()
  {
    cout << "User name:  " << Name << endl;
    cout << "User email: " << Email << endl;
    cout << "User phone: " << Phone << endl;
  }
  User(string name, string email, string phone)
  {
    Name = name;
    Email = email;
    Phone = phone;
  }
};