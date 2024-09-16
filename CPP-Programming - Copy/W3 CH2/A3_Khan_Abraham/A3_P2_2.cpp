
#define _USE_MATH_DEFINES //use of mathematical constants like M_PI from the <cmath> library.

#include <iostream> //importing libraries
#include <cmath>
#include <string>

using namespace std;// Allows us to use the standard library without the std:: prefix

void triangle();                                             // Function declarations
float sideLength(float x1, float y1, float x2, float y2);
float calculateAngle(float a, float b, float c);
float perimeter(float a, float b, float c);
float area(float a, float b, float c);

int main()  // Declaring main function, the enter point of the code
{
    triangle();// Method Call
    return 0;
}

void triangle()//Method defination
{
    float x1;   //variables Xs and Ys to store user input for 3 different points
    float y1;   //variable a, b, c to hold the length of three sides of the triangle
    float a;    //probably would have been better to create a class point that held two values, x and y

    float x2;
    float y2;
    float b;

    float x3;
    float y3;
    float c;

    cout << "Please enter 3 x and y values to create a triangle." << endl;  //prompting the user to input value for 3 different points
    cout << "Value for x1: ";
    cin >> x1;

    cout << "Value for y1: ";
    cin >> y1;

    cout << "Value for x2: ";
    cin >> x2;

    cout << "Value for y2: ";
    cin >> y2;

    cout << "Value for x3: ";
    cin >> x3;

    cout << "Value for y3: ";
    cin >> y3;

    a = sideLength(x1, y1, x2, y2); //Calling the sideLength method to calculate the side lengths of the triangle
    b = sideLength(x2, y2, x3, y3);
    c = sideLength(x3, y3, x1, y1);

    cout << "\n"
         << endl;
    cout << "Length a (point 2 to 3) = " << b << endl;          //outputs the 3 side lengths
    cout << "Length b (point 3 to 1) = " << c << endl;
    cout << "Length c (point 1 to 2) = " << a << endl;
    cout << "\n"
         << endl;
    cout << "Angle value at point A = " << calculateAngle(b, c, a) << " Degrees" << endl; // Calling the calculateAngle method to find the angles in degree and outputing the values
    cout << "Angle value at point B = " << calculateAngle(a, c, b) << " Degrees" << endl;
    cout << "Angle value at point C = " << calculateAngle(a, b, c) << " Degrees\n"
         << endl;

    cout << "Perimeter of the triangle = " << perimeter(a, b, c) << endl; // Calling the perimeter method to find the perimeter and outputing the value

    cout << "Area of the triangle = " << area(a, b, c) << endl; // Calling the area method to find the area and outputing the value

    return;
}

float sideLength(float x1, float y1, float x2, float y2) //Method defination
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));  // Using Pythagorean theorem to find the side lengths
}

float calculateAngle(float a, float b, float c)//Method defination
{
    float cosAngle = (pow(a, 2) + pow(b, 2) - pow(c, 2)) / (2 * a * b); // Using Law of Cosine to find the angle values, then convered to Degrees
    float angle = acos(cosAngle);
    angle = angle * 180 / M_PI;
    return angle;
}

float perimeter(float a, float b, float c)//Method defination
{
    return a + b + c;                       // adding all the side lengths to fin perimeter
}

float area(float a, float b, float c)//Method defination
{
    float s = .5 * (a + b + c);                     //Using Heron's formula to find the area of a triangle only using side length (This is new to me)
    return sqrt(s * (s - a) * (s - b) * (s - c));
}