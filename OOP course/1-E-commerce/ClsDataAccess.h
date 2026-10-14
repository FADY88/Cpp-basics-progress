#include <iostream>
using namespace std;
// an abstract class
class DataAccess
{
  // pure virtual function
  virtual string GetData() = 0;
  virtual string GetById(int id) = 0;
  virtual bool Insert(string object) = 0;
  virtual bool Update(string object) = 0;
  virtual bool Delete(string object) = 0;
};