#include <iostream>

using namespace std;

int main()
{
    // constant variable
    // 1. variable declaration: reverves 8 bytes
    // 2. must be initailized with a value
    // 3. the value can't be changed
    // 4. must be capitalized --> convention
    const double PI = 3.14;

    // lvalue: variable that appears on the left side of the assignment
    // rvalue: express that appears on the right side of an assignment
    // lvalue = rvalue;
    // x = 10
    // y = 5
    // x = x + y;
    //  x + y = x //retreat the value of x and write the value of x  to x + y the RAM address
    //  x + y : expression, which is a value without a RAM address associated with it
    // y = x;

    // PI = 10.1234;

    // typecasting
    char c = 126;
    cout << "c = " << c << endl;
    //typecasting: convert a type to another type
    //syntax: (int) variable/expression
    //                  static_cast<int> (variable/expression)
    cout << "decimal value of c = " << (int) c << endl;
    cout << "decimal value of c = " << static_cast<int> (c) << endl;

    return 0;
}