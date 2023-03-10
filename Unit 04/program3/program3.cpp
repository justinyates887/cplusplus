#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

  // variable declaration
  string title;
  string author;
  string ISBN;
  float price;
  int quantity;
  float totalPrice;

  // input/output
  cout << "Please enter the title of your favorite book: ";
  getline(cin, title);
  cout << "Please enter the author of this book: ";
  getline(cin, author);
  cout << "Please enter the ISBN reference number for this book: ";
  getline(cin, ISBN);
  cout << "Please enter the price of this book, excluding the currency symbol: "
          "$";
  cin >> price;
  cout << "Please enter the quanitity of books you wish to purchase: ";
  cin >> quantity;

  // Final output
  totalPrice = price * quantity;

  cout << "\nFAVORITE BOOK \n" << endl;
  cout << string(50, '-') << endl;
  cout << "Title: " << title << endl;
  cout << "Author: " << author << endl;
  cout << "ISBN:  " << ISBN << endl;
  cout << "Price:  " << price << "\n" << endl;
  cout << string(20, '-') << endl;
  cout << "Total Price: $" << totalPrice << setprecision(2);

  return 0;
}