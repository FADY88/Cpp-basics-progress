#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    //double n = 5, q = 1; cin >> n;
    //q = sqrt(n);
    //cout << q;
    cout << "Welcome to calculating x in quadratic equations.\n";
    cout << "Please notice the following instructions.\n";
    cout << "This is called 'the general quadratic equation' which like this: Ax^2+Bx+C=0\n";
    cout << "Please enter the variables A,B and C.\n";
    double A = 1, B = 1, C = 1, x1 = 1, x2 = 1;
    cin >> A;
    cin >> B;
    cin >> C;
    //cout << A;
    //cout << B;
    //cout << C;
    x1 = (-B + sqrt(B * B - 4 * A * C)) / (2 * A);
    x2 = (-B - sqrt(B * B - 4 * A * C)) / (2 * A);
    cout << "The answers are\n";
    cout << "x1=" << x1 << "\n" << "x2=" << x2;
}