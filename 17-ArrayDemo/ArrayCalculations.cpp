#include <iostream>
using namespace std;
int main()
{
    //Welcome user
    cout << "Hello to set calculations\n";
    //Declare an array
    int numbers[5]{};
    //Retry the app
    char Again = 'y';
    while (Again == 'y' || Again == 'Y')
    {
        //Take array values from user 
        for (int i = 0; i < 5; i++)
        {
            cout << "Please enter number " << i + 1 << " of the set.\n";
            cin >> numbers[i];
        }
        //Calculate
        int sum = 0,difference = 0, BiggerNumber = numbers[0], SmallerNumber = numbers[0];
        float product = 1, division = 1;
        for (int k = 0; k < 5; k++)
        {
            //Bigger Number
            if (BiggerNumber < numbers[k])
                BiggerNumber = numbers[k];
            //Smaller Number
            if (SmallerNumber > numbers[k])
                SmallerNumber = numbers[k];
            //sum = sum + numbers[k];
            sum += numbers[k];
            //+  -  /  *
            difference -= numbers[k];
            product *= numbers[k];
            division /= numbers[k];
        }            
        //Print result
        cout << "The average of the set is " << sum/5 << "\n";
        cout << "The biggest number of the set is " << BiggerNumber << "\n";
        cout << "The smallest number of the set is " << SmallerNumber << "\n";
        cout << "The sum of the set is " << sum << "\n";
        cout << "The difference of the set is " << difference << "\n";
        cout << "The product of the set is " << product << "\n";
        cout << "The division of the set is " << division << "\n";

        cout << "Do you want to try again?   (y/n)\n";
        cin >> Again;
    }
    
}
