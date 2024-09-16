/*

*/
//
#include <iostream>
#include <iomanip> // formatted output
//
using namespace std;
//
int main()
{
    float x = 1.23456;
    double y = 7.89512345;

    //fixed: fixed format vs scientific format
    //setprecision(n): n is the number of decimal places to display
    //One you use fixed and setprecision, it affects all the float and double cariable coming after the line
    cout << fixed << setprecision(2) << x << ", " << y << endl;
    cout << scientific << x << ", " << y << endl;

    return 0;
}