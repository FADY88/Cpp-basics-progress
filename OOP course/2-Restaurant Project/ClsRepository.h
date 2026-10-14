#pragma once
#include <iostream>
using namespace std;
class Repository
{
  virtual void Add() = 0;
  virtual void Edit() = 0;
  virtual void Delete() = 0;

  virtual string Show() = 0;
};