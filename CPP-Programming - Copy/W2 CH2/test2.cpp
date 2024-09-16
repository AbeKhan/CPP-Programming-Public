#include <iostream>
#include <typeinfo>

using namespace std;

void ask();

int main()
{
    ask();
    return 0;
}

void minMax()
{
    string numb1;
    string numb2;
    int holder1;
    int holder2;
    bool exit = false;

    cout << "To exit program, please enter x" << endl;

    while (!exit)
    {
        cout << "Please enter two integer values.\n"
             << "Integer one: ";
        cin >> numb1;
        cout << "Integer two: ";
        cin >> numb2;

        if (numb1 == "x" || numb2 == "x")
        {
            exit = true;
            return;
        }
        // else if(containsNumber(numb1))
        // {

        // }

        holder1 = stoi(numb1);
        holder2 = stoi(numb2);

        if (numb1 > numb2)
        {
            cout << numb1 << " is greater than " << numb2 << endl;
        }
        else if (numb1 == numb2)
        {
            cout << numb1 << " and " << numb2 << " are the same number, try again." << endl;
        }
        else
        {
            cout << numb2 << " is greater than " << numb1 << endl;
        }
    }
}
