#include <iostream>
#include <iomanip>
#include <string>
#include "Book.h"
using namespace std;

int main(int argCount, char* args[]){

  // Initialize variables for three books and their values

  string titleOne = "The Enchiridion";
  string titleTwo = "The Illiad";
  string titleThree = "The Gay Science";

  string authorOne = "Epictetus";
  string authorTwo = "Homer";
  string authorThree = "Friedrich Nietzsche";

  string isbnOne = "9781521560341";
  string isbnTwo = "9780140275360";
  string isbnThree = "9798669217730";

  float priceOne = 19.99;
  float priceTwo = 29.99;
  float priceThree = 15.99;

  int ratingOne = 5;
  int ratingTwo = 5;
  int ratingThree = 5;

  int quantityOne;
  int quantityTwo;
  int quantityThree;

  //Output Book(s) values
  cout << "BOOKSTORE \n" << endl;

  //Book One
  cout << "Title: " << titleOne<< endl;
  cout << "Author: " << authorOne << endl;
  cout << "ISBN: " << isbnOne  << endl;
  cout << "Price: $" << priceOne << endl;
  cout << "Rating: "<< ratingOne << "\n" << endl;

  // Book two
  cout << "Title: " << titleTwo << endl;
  cout << "Author: " << authorTwo << endl;
  cout << "ISBN: " << isbnTwo << endl;
  cout << "Price: $" << priceTwo << endl;
  cout << "Rating: "<< ratingTwo << "\n" << endl;

  //Book Three
  cout << "Title: " << titleThree << endl;
  cout << "Author: " << authorThree << endl;
  cout << "ISBN: " << isbnThree << endl;
  cout << "Price: $" << priceThree << endl;
  cout << "Rating: "<< ratingThree << "\n" << endl;

  //Get quantity inputs
  cout << "Please enter the quantity of " << titleOne << " by " 
       << authorOne << " you would like to purchase: ";
  cin >> quantityOne;
  
  //Check
  if(quantityOne < 0) {
    cout << "ERROR: Quantity cannot be less than 0. Defaulting to 0";
    quantityOne = 0;
    }
  
  cout << "Please enter the quantity of " << titleTwo << " by " 
       << authorTwo << " you would like to purchase: ";
  cin >> quantityTwo;

  //Check
  if(quantityTwo < 0) {
    cout << "ERROR: Quantity cannot be less than 0. Defaulting to 0";
    quantityTwo = 0;
    }
  
  cout << "Please enter the quantity of " << titleThree << " by " 
       << authorThree << " you would like to purchase: ";
  cin >> quantityThree;

  //Check
  if(quantityThree < 0) {
    cout << "ERROR: Quantity cannot be less than 0. Defaulting to 0";
    quantityThree = 0;
    }

  cout << fixed << setprecision(2);

  //Display receipt
  float totalPrice = (quantityOne * priceOne) + (quantityTwo * priceTwo) + (quantityThree * priceThree);
  
  cout << "\nRECEIPT" << endl;
  cout << string(50, '-') << endl;
  cout << titleOne << " by " << authorOne << ": $" << quantityOne * priceOne << endl;
  cout << titleTwo << " by " << authorTwo << ": $" << quantityTwo * priceTwo << endl;
  cout << titleThree << " by " << authorThree << ": $" << quantityThree * priceThree << endl;
  cout << string(20, '-') << endl;
  cout << "Total: $" << totalPrice << endl;

  return 0;
}