#include <iostream>
using namespace std;
int main()
{
    // welcome user and ask for their score
    cout << "Welcome to student grade program\n"
         << "Please enter your score.\n";
    // declare variables and take it
    float score = 0;
    cin >> score;
    // conditional statement
    // if (score < 60 && 0 < score)
    // if (score >= 70 || score <= 0)
    if (0 <= score && score < 60)
        cout << "Your grade is F or failed";
    else if (60 <= score && score < 70)
        cout << "Your grade is D or fair";
    else if (70 <= score && score < 80)
        cout << "Your grade is C or good";
    else if (80 <= score && score < 90)
        cout << "Your grade is B or very good";
    else if (90 <= score && score <= 100)
        cout << "Your grade is A or excellent";
    else
        cout << "Sorry, the score can't be bigger than 100 or smaller than 0.";
}