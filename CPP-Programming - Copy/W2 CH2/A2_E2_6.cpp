#include <iostream> // Import the library iostream and iomanip
#include <iomanip>

using namespace std; // Allows us to use the standard library without the std:: prefix

void convert(); // Function declaration

int main() // Declaring main function, the enter point of the code
{
    convert(); // Calling the method "minMax"
    return 0;
}

void convert() // Method Definition

{
    float numb1;                    // variable to store in the user input
    float divisorMiles = 1609.344;  // 1609.344 meters equals a mile
    float multiFeet = 3.2808399;    // 1 meters times 3.2808399  equals  feet
    float multiInches = 39.3700787; // 1 meters times 39.3700787 equals  inches
    bool exit = false;              // Variable that controls the loop

    while (!exit) // loops through the following code until exit is true
    {
        cout << "Please enter a value to convert meters to miles.\n" // outputs a prompt for the user to answer. Then waits for a input to put in numb1
             << "Value: ";
        cin >> numb1;

        cout << fixed << setprecision(5) << numb1/divisorMiles << " miles " << numb1 * multiFeet << " feet " << numb1 * multiInches << " inches " << endl; 
        // setprecision(n): n is the number of decimal places to display
        // Inline expressions to convert meters to miles, feet and inches whilst outputting. 
    }
}