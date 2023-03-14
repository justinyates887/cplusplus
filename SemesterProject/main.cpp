#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

#include "Book.h"
#include "Functions.h"
using namespace std;

int main(int argCount, char* args[]){

  // Initialize objects for three books and their values

  /* Code before IO Chp 7*/ 
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
  
  DisplayBook(bookOne, bookTwo, bookThree);

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
  float totalPrice = CalculatePrice(bookOne, bookTwo, bookThree);
  DisplayReceipt(bookOne, bookTwo, bookThree, totalPrice);

  return 0;
}