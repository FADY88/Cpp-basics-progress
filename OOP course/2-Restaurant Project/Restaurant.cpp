#include <iostream>
#include "ClsClient.h"
#include "ClsRestaurant.h"
using namespace std;
int main()
{
  cout << "Hello, Restaurant\n";
  Client client(1, 3, "564564", 56456, "fady", "fady@gmail.com", "01228935");
  client.DisplayInfo();
  Restaurant rest("logo","456456", "1234567890", "shady", "shady@gmail.com", "9876543210");
  rest.DisplayInfo();

  User* user;
  user = &client;
  user->ShowOrder();
  user->DisplayInfo();

  user = &rest;
  user->ShowOrder();
  user->DisplayInfo();
}