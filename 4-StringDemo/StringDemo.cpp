#include <iostream>
#include <string>

using namespace std;
int main()
{
    cout << "What is your name?\n";
    string username = "c";
    //to read the whole line
    getline(cin, username); 
    //to read the whole line
    cout << "your name is amazing, " << username << "\n";
    username = "Hi " + username;
    cout << "Anyway, " << username;
}
