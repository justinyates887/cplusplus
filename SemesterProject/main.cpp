#include <iostream>
#include <iomanip>
#include <string>
#include "Book.h"
using namespace std;

int main(int argCount, char* args[]){

  // Initialize objects for three books and their values
  Book bookOne;
  bookOne.title = "The Enchiridion";
  bookOne.author = "Epictetus";
  bookOne.ISBN = "9781521560341";
  bookOne.price = 19.99;
  bookOne.rating = 5;

  Book bookTwo;
  bookTwo.title = "The Illiad";
  bookTwo.author = "Homer";
  bookTwo.ISBN = "9780140275360";
  bookTwo.price = 29.99;
  bookTwo.rating = 5;

  Book bookThree;
  bookThree.title = "The Gay Science";
  bookThree.author = "Friedrich Nietzsche";
  bookThree.ISBN = "9798669217730";
  bookThree.price = 15.99;
  bookThree.rating = 5;

  //Output Book(s) values
  cout << "BOOKSTORE \n" << endl;

  //Book One
  cout << "Title: " << bookOne.title<< endl;
  cout << "Author: " << bookOne.author << endl;
  cout << "ISBN: " << bookOne.ISBN  << endl;
  cout << "Price: $" << bookOne.price << endl;
  cout << "Rating: "<< bookOne.rating << "\n" << endl;

  // Book two
  cout << "Title: " << bookTwo.title << endl;
  cout << "Author: " << bookTwo.author << endl;
  cout << "ISBN: " << bookTwo.ISBN << endl;
  cout << "Price: $" << bookTwo.price << endl;
  cout << "Rating: " << bookTwo.rating << "\n" << endl;

  //Book Three
  cout << "Title: " << bookThree.title << endl;
  cout << "Author: " << bookThree.author << endl;
  cout << "ISBN: " << bookThree.ISBN << endl;
  cout << "Price: $" << bookThree.price << endl;
  cout << "Rating: "<< bookThree.rating << "\n" << endl;

  //Get quantity inputs
  cout << "Please enter the quantity of " << bookOne.title << " by " 
       << bookOne.author << " you would like to purchase: ";
  cin >> bookOne.quantity;
  
  //Check
  if(bookOne.quantity < 0) {
    cout << "ERROR: Quantity cannot be less than 0. Defaulting to 0";
    bookOne.quantity = 0;
    }
  
  cout << "Please enter the quantity of " << bookTwo.title << " by " 
       << bookTwo.author << " you would like to purchase: ";
  cin >> bookTwo.quantity;

  //Check
  if(bookTwo.quantity < 0) {
    cout << "ERROR: Quantity cannot be less than 0. Defaulting to 0";
    bookTwo.quantity = 0;
    }
  
  cout << "Please enter the quantity of " << bookThree.title << " by " 
       << bookThree.author << " you would like to purchase: ";
  cin >> bookThree.quantity;

  //Check
  if(bookThree.quantity < 0) {
    cout << "ERROR: Quantity cannot be less than 0. Defaulting to 0";
    bookThree.quantity = 0;
    }

  cout << fixed << setprecision(2);

  //Display receipt
  float totalPrice = (bookOne.quantity * bookOne.price) + (bookTwo.quantity * bookTwo.price) + (bookThree.quantity * bookThree.price);
  
  cout << "\nRECEIPT" << endl;
  cout << string(50, '-') << endl;
  cout << bookOne.title << " by " << bookOne.author << ": $" << bookOne.quantity * bookOne.price << endl;
  cout << bookTwo.title << " by " << bookTwo.author << ": $" << bookTwo.quantity * bookTwo.price << endl;
  cout << bookThree.title << " by " << bookThree.author << ": $" << bookThree.quantity * bookThree.price << endl;
  cout << string(20, '-') << endl;
  cout << "Total: $" << totalPrice << endl;

  return 0;
}