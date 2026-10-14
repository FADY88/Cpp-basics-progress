#include <iostream>
using namespace std;
class Helper
{
public:
  static int UserId;
  static string ServerName;
  static string UserName;

  static void helperFunction()
  {
    // something that helps
    cout << "I got help :)\n";
  }
  int test;
};
/* remember that for static members like UserId, ServerName,
  and UserName, you need to provide definitions outside of
  the class declaration. This is because static members exist
  independently of any class instances and need to be defined
  in a single translation unit to avoid linker errors.*/
int Helper::UserId;
string Helper::ServerName;
string Helper::UserName;