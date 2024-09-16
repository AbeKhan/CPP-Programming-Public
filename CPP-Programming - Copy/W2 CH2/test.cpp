#include <iostream>
//#include <string>

using namespace std;

void ask();

int main()
{
    ask();
    return 0;
}

void convert()
{
    string numb1;
    float divisor = 1609.344;
    bool exit = false;

    cout << "To exit program, please enter x" << endl;

    while (!exit)
    {
        cout << "Please enter a value to convert meters to miles.\n"
             << "Value: ";
        cin >> numb1;
        // cout << "integer two: ";
        // cin >> numb2;

        if (numb1 == "x")
        {
            exit = true;
            return;
        }

        float holder1 = stof(numb1);

        holder1 /= divisor;
    }
}