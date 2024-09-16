#include <iostream>

using namespace std;

int main()
{
    double x = 1.2345678;
    double y = 8.7654321;

    //+, -, *, /, %
    cout << "x + y = " << (x + y) << endl;  // (x + y) : an expression
    cout << "x / y = " << (x / y) << endl;

    //the order of precedence
    //() first
    //*, /, % before +, -
    //if *, /, % are in one expression, left to right --> associativity
    //if +, - are in one expression, left to right
    double z = x + y * x / y; 

    //post increment: var++;
    z++;    // z = z + 1;

    // pre decrememnt; --var;
    --z; // z = z - 1;
    z--;

    x = z--;

    return 0;
}