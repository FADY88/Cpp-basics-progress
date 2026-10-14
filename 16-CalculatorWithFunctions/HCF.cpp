#include <iostream>
using namespace std;
void Message(string sentence)
{
    cout << "******************************\n";
    cout << sentence << "\n";
    cout << "******************************\n";
}
int HCF(int bigValue, int smallValue)
{
    int result = 0;
    for (int i = 1; i <= bigValue; i++)
    {
        if (bigValue % i == 0 && smallValue % i == 0)
            result = i;
    }
    return result;
}
int main()
{
    //Welcome
    Message("Welcome to HCF program.");
    //Declare variables
    int Value1 = 0, Value2 = 0, result = 0;
    //Main While loop
    char Key = 'y';
    while (Key != 'n' || Key != 'N')
    {
        //Get values
        Message("Please enter first value.");
        cin >> Value1;
        Message("Please enter second value.");
        cin >> Value2;
        //Apply HCF function
        if (Value1 > Value2)
        {
            cout << "HCF: " << HCF(Value1, Value2);
        }
        else if (Value1 == Value2)
        {
            Message("Sorry there is no difference between your values.");
            //continue is to immediately start the next round
            //break does break loop and leave it
            continue;
        }
        else
        {
            cout << "HCF: " << HCF(Value2, Value1);
        }
        //Print result

        Message("Do yo want to try Again. (y/n)");
        cin >> Key;
    }
}