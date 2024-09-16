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
    // variable declaration
    int x;
    int y = 5;

    // prompt the user to enter an integer
    cout << "Enter an integer: ";
    // cin: to get an input or multiple inputs from the keyboard
    //cin >> var1
    //cin >> var1 >> var2 >> var3
    cin >> x;
    if(x>0)
    {
        cout << x << " is positive" << endl;
    }
    else if( x == 0)
    {
        cout << x << " is zero" << endl;
    }
    else{
        cout << x << " is negative" << endl;
    }
    

    //if-else syntax: if(boolean condition) {} else {}
    if(x >= y) { // x >= y called an expression: a segment of code that is evaluated to a value
        cout << x << " is greater than " << y << endl;
    }
    else{
        
    }

    return 0;
}