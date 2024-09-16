#include <iostream> //importing libraries
#include <iomanip>

using namespace std; // Allows us to use the standard library without the std:: prefix

void priceCalc(); // Function declaration

int main() // Declaring main function, the enter point of the code
{
    priceCalc(); // Method Call
    return 0;
}

void priceCalc() //Method defination
{
    float taxRate = 1.075;          //tax rate at 7.5%
    int ship_charge_per_book = 2;   //shipping price per book $2
    float price_of_book;            //user inputed data on price of the book
    float total_price;              //price after calulation
    int total_numb_of_books;        //user inputed data on amout of books

    cout << "Enter price of book: " << endl; //prompt to user to enter price of book
    cin >> price_of_book;
    cout << "Enter total amount of books: " << endl; //prompt to user to enter amount of book
    cin >> total_numb_of_books;

    total_price = (price_of_book * total_numb_of_books + total_numb_of_books * ship_charge_per_book) * taxRate; // price per book times number of book added to total number of book times 
                                                                                                                //shipping charge per book all time the tax rate. Return the total price of the book, shipping and tax

    cout << "Total price: $" << fixed << setprecision(2) << total_price << endl; //outputs price after calulation
    //fixed & setpercision() limiting the output to only show 2 decimal places
}