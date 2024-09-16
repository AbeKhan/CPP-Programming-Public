#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // const double PI = 3.14159265358979323846;
    // int diameter;
    // /* Your code goes here */
    // // cout << "Diameter: ";
    // cin >> diameter;

    // float volume1 = PI * diameter * diameter * diameter / 6;
    // diameter++;
    // float volume2 = PI * diameter * diameter * diameter / 6;

    // float growth1 = volume2 - volume1;
    // cout << "Increase: " << fixed << setprecision(0) << growth1 /* Your code goes here */ << endl;
    // /* Your code goes here */
    // diameter++;
    // float volume3 = PI * diameter * diameter * diameter / 6;
    // float growth2 = volume3 - volume2;
    // cout << "Increase: " << fixed << setprecision(0) << growth2 /* Your code goes here */ << endl;

    cout << "Please enter your first and last name on the next line." << endl;

    /* Your code goes here */
    string firstName;
    string lastName;
    string full_name;
    int spaceNumb = 0;

    cin >> full_name;

    spaceNumb = full_name.find(" "); cout << spaceNumb;

    firstName = full_name.substr(0, spaceNumb);
   // lastName = full_name.substr(spaceNumb);

    full_name = lastName + ", " + firstName;

    cout << full_name << endl;

    return 0;
}