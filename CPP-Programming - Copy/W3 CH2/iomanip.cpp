
#include <iostream>
#include <iomanip> 
#include <cmath>

using namespace std;

int main()
{
    // float x = 1.23456;
    // double y = 7.89512345;

    // //fixed: fixed format vs scientific format
    //scientific adds E to the end of the decimal value.
    // //setprecision(n): n is the number of decimal places to display
    // //One you use fixed and setprecision, it affects all the float and double variable coming after the line
    // cout << fixed << setprecision(2) << x << ", " << y << endl;
    // cout << scientific << x << ", " << y << endl;

    float x = 1.2345678;
    double y = 8.7654321;

    //by default, right-aligned
    //setw(): must be set for every variable or value
    cout << "x = " << fixed << setprecision(3) << setw(8) << setfill('*') <<  x << endl;
    cout << "y = " << setw(11) << y << endl;

    double result = pow(x, y); //x^y
    cout << "pow(" << x << "," << y << ") = "  << setfill(' ') << setprecision(5) << setw(9) << result << endl;

    cout << "sqrt(" << result << ") = " << setfill('*') <<  setw(10) << sqrt(result) << sqrt(result) << endl;

    cout << "scienfic output of result = " << scientific << setw(10) << result << endl;
    return 0;
}