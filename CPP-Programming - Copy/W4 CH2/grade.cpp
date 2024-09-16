#include <iostream>

using namespace std;

int main()
{

    double grade;

    // prompt the user
    cout << "Enter a grade: ";

    // get a user input from the keyboard: standard input
    cin >> grade;
    // cin: a "grobal" variable, a class type
    // inpupt handling--> validate the input
    if (cin.fail()) // cin.fail() returns a boolean vaule -> true or false
                    // cin.fail() itself is used as a condition of the if statement
                    // when cin.fail) returns true if the data type of the input does not match the data type of the variable
                    //{} under if : a block

    //\n: a newline
    // \: escape character that must be follow by one character
    //\n, \t, \\, \', \"--> example of escape sequence
    // n
    {
        cout << "Input data type error \n"
             << endl;
        exit(1); // terminate the program with the return code of 1
    }
    else
    {
        cout << "Entered grade is " << grade << endl;
    }

    // display corresponding letter grade
    char letter_grade;
    if (grade >= 90)
    {
        letter_grade = 'A';
    }
    else if (grade >= 80) // this condition will be checked only when grade < 90
                          //  in other words, only when grade >= 90 is false
    {
        letter_grade = 'B';
    }
    else if (grade >= 70)
    {
        letter_grade = 'C';
    }
    else if (grade >= 60)
    {
        letter_grade = 'D';
    }
    else // if only one condition is left, do not use else if, but just else without condition
         //  grade < 60
    {
        letter_grade = 'F';
    }

    cout << "Letter Grade is: " << letter_grade << endl;

    string passed = (letter_grade <= 'C') ? "passed" : "retake";
    // string passed = a boolean condition ? A : B;
    //   op1 ? op2 : op3 --> the ternary/conditional operator
    //  string passed;
    //   if(ob1){
    //        passed = op2
    //    }
    //  else{
    //      passed = op3
    //  }
    cout << "The student " << passed << endl;
    
    //switch --case
    switch (letter_grade) //switch(interger_value) grade --> typecasting to int
    {
        //case interger_value:
        case 'A':
            cout << "You aced!\n";
            break;
        case 'B':
            cout << "You did a good job!\n";
            break;
        case 'C':
            cout << "Try better!\n";
            break;
        default:
            cout << "Drop out!\n";
            
    }


    return 0; // normal termination with 0
}
