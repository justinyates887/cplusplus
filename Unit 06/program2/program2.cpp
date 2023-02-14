#include <iomanip>
#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

int main() {

  // variable declaration
  Book favoriteBook;
  float totalPrice;

  // input/output
  cout << "Please enter the title of your favorite book: ";
  getline(cin, favoriteBook.title);
  cout << "Please enter the author of this book: ";
  getline(cin, favoriteBook.author);
  cout << "Please enter the ISBN reference number for this book: ";
  getline(cin, favoriteBook.ISBN);
  cout << "Please enter the price of this book, excluding the currency symbol: "
          "$";
  cin >> favoriteBook.price;
  cout << "Please enter the quanitity of books you wish to purchase: ";
  cin >> favoriteBook.quantity;

  // Final output
  totalPrice = favoriteBook.price * favoriteBook.quantity;

  cout << "\nFAVORITE BOOK \n" << endl;
  cout << string(50, '-') << endl;
  cout << "Title: " << favoriteBook.title << endl;
  cout << "Author: " << favoriteBook.author << endl;
  cout << "ISBN:  " << favoriteBook.ISBN << endl;
  cout << "Price: $" << favoriteBook.price << "\n" << endl;
  cout << string(20, '-') << endl;
  cout << "Total Price: $" << totalPrice << setprecision(2);

  return 0;
}