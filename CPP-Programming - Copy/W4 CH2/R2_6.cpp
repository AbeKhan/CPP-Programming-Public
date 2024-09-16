#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 2.5;
    double y = -1.5;
    int m = 18;
    int n = 4;

    // Expressions  PEMDAS
    //[ Parentheses Exponents Muliplication Division Addition Subtraction ]
    // This is how the complier will compute the expressions beneath.

    x + n *y - (x + n) * y;
    // The first thing that will be computed is (x + n) because they are inside the parentheses
    // 2.5 + 4 = 6.5 This returns a double because one of the arguments is a double, this is to preserve the floating-point value
    // afterwards all muilplication expressions will be done
    // n * y and 6.5 * y
    // (n * y) = -6
    // 6.5 * y = -9.75
    // Next division will be done, however, there is no division in this expression, so it will look for addition next.
    // x + -6
    // x + -6 = -3.5
    // lastly, subtraction is done
    // -3.5 - -9.75
    // -3.5 - -9.75 = 6.25
    cout << x + n * y - (x + n) * y << endl;

    m / n + m % n;
    // The expression does not have Parentheses Exponents Muliplication, these will be skipped, the next step will be Division.
    // Because modulus is a special operator that divisions a number with another and return the remainder, this will be done at the same time as division.
    // m / n and m % n
    // 18 / 4 = 4.5 However, because both m and n are int values, the .5 is lost and the value that is returned is 4
    // m % n
    // 18 % 4 = 2 This returns 2 because 4 is able to go into 18 4 times, leaving 2 leftover
    // Next addition is checked
    // 4 + 2 = 6
    cout << m / n + m % n << endl;

    5 * x - n / 5;
    // This expressions does not have Parentheses Exponents, there is Muliplication
    // 5 * x
    // 5 * 2.5 = 11 This returns a double because x is a double, this is to preserve the floating-point value
    // After muliplication is division
    // n / 5
    // 4 / 5 = .75 However, because both arugments are int value, what is return is 0
    // 4 / 5 = 0
    // There is no addition, but there is subtraction
    // 11 - 0 = 11
    cout << 5 * x - n / 5 << endl;

    1 - (1 - (1 - (1 - (1 - n))));
    //This expression has parentheses, however, there are parentheses inside of parentheses, inside of parentheses.
    //In this case, the inner most parenthese is gone first before anything else. 
    //We have 4 


    sqrt(sqrt(n));

    return 0;
}