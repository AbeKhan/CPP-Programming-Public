/*
    CMSC1613 W2 Programs:
    This program is to demostrate under the hood behind a variable declaration
    Author: Abraham Khan
    Date: 8/26/24
*/

// pre-processer
#include <iostream>

using namespace std;

int main() // entery of the code, calling of other functions
{
    // cout << "Hellow World!";
    // return 0;

    cout << "Hello, World!\n";
    // variable declaration
    int x;
    int y = 5;

    // display the address of the RAM for each variable
    cout << "address of x " << &x << endl;
    cout << "address of y " << &y << endl;

    // display that value of each variable
    cout << "value of x = " << x << endl;
    cout << "value of y = " << y << endl;

    // display the size of each variable using sizeof()
    // it will display the number of bytes reserved for a variable.
    cout << "size of x = " << sizeof(x) << endl;
    cout << "size of y = " << sizeof(int) << endl;

    // add x and y
    int result = x + y;
    cout << "result = " << result << endl;

    //float and double stores a number with decimal places
    //floating point numbers
    //1.0 ==> 1.0 * 10^0, 0.1 * 10, 0.01 * 100 
    float number1 = 1.0;
    double number2 = 2.0;
    cout << "value of number1 = " << number1 << endl;
    cout << "value of number2 = " << number2 << endl;
    cout << "size of number1 = " << sizeof(number1) << endl;
    cout << "size of number2 = " << sizeof(double) << endl;

    return 0;
}