#include <iostream> // Import the library iostream

using namespace std; // Allows us to use the standard library without the std:: prefix

void minMax(); // Function declaration

int main() // Declaring main function, the enter point of the code
{
    minMax(); // Calling the method "minMax"
    return 0;
}

void minMax() // Method Definition
{
    string numb1; // numb1 & numb2 two are variables to store in the user inputs
    string numb2;
    int holder1; // holder1 & holder2 will hold the int values of the users input once casted into a Integer
    int holder2;
    bool exit = false; // Variable that controls the loop

    cout << "To exit program, please enter x" << endl; // output informing user how to exit the program

    while (!exit) // loops through the following code until exit is true
    {
        cout << "Please enter two integer values.\n"
             << "Integer one: ";
        cin >> numb1; // outputs prompts for the user to answer. Then waits for a input to put in numb1 and numb2
        cout << "Integer two: ";
        cin >> numb2;

        if (numb1 == "x" || numb2 == "x")   //checks for if either the first input or second input is an x, thus truning exit true. Exiting the loop once the if returns.
        {
            exit = true;
            return;
        }

        holder1 = stoi(numb1); //casts the users input from string values to int values, before this however,it would be best to have a check to ensure there are no char inputs inside the string at all.
        holder2 = stoi(numb2);

        if (holder1 > holder2) //the users input goes through conditionals to determine if the inputed values are the same, or if one values is greater than another.
        {
            cout << holder1 << " is greater than " << holder2 << endl;
        }
        else if (holder1 == holder2)
        {
            cout << holder1 << " and " << holder2 << " are the same number, try again." << endl;
        }
        else
        {
            cout << holder2 << " is greater than " << holder1 << endl;
        }
    }
}
