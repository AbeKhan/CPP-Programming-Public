#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string s1; // string is a class type
               // is composed of values and functions
               // no initail value for a strin variable --> empty string
    string s2;

    cout << "s1 = " << setfill('*') << setw(5) << s1 << endl;
    cout << "s2 = " << setfill('@') << setw(3) << s1 << endl;

    s1 = "Food!!!";
    s2 = "Pizza";

    // string  + string : string concatenation
    string nick_fav = s1 + s2;
    cout << "Nick's dream is " << nick_fav << endl;

    string david_dream = "sleep!"; //"sleep!" --> a string literal
    cout << "David's dream is " << david_dream + "sleep!sleep!" << endl;

    // Unable to concate string literal to another string literal

    // cout << "Troy's dream is " + " going home!" << endl;

    // functions related a string type
    // a. get the length of a string variable
    //   var.length()
    cout << "length of nick_fav: " << nick_fav.length() << endl;
    cout << "length of david_dream: " << david_dream.length() << endl;

    // i: index
    // using an index variable, access each character in a string
    // var[i]
    for (int i = 0; i < nick_fav.length(); i++)
    {
        cout << "nick_fav[" << i << "] = " << nick_fav[i] << endl;
    }

    // substring(index): get the character from the index to the end of the string
    cout << "from index 5: " << nick_fav.substr(5) << endl;
    cout << "from index 10: " << nick_fav.substr(10) << endl;

    // substring(index, number_of_characters)
    cout << "from index 5, 3 character: " << nick_fav.substr(5, 3) << endl;

    //"Friday!" --> a constant string (Can not use .length() or .substring() )
    // cout << "Friday!".length() << endl;
    nick_fav.clear();
    cout << "test: " << nick_fav << endl;
    return 0;
}