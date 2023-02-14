#include <iostream>
#include <iomanip>
#include <string>
#include "Product.h"
using namespace std;

int main(){
  
  //Variable declarations
  char currency = '$';
  float totalPrice;

  Product productOne;
  productOne.price = 1.99;
  productOne.name = "Bean Burrito";

  Product productTwo;
  productTwo.price = 1.79;
  productTwo.name = "Crunchy Taco";

  Product productThree;
  productThree.price = 5.19;
  productThree.name = "Chicken Quesadilla";

  //Print menu
  cout << "Take a look at our Menu!\n" << endl;
  cout << "Name" << setw(21) << "Price" << endl;
  cout << string(50, '-') << endl;
  cout << productOne.name << setw(25 - productOne.name.length()) << productOne.price << endl;
  cout << productTwo.name << setw(25 - productTwo.name.length()) << productTwo.price << endl;
  cout << productThree.name << setw(25 - productThree.name.length()) << productThree.price << endl;

  //input/output stream
  cout << "\nHow many " << productOne.name <<"s would you like to purchase?\n";
  cin >> productOne.amount;

  cout << "How many " << productTwo.name <<"s would you like to purchase?\n";
  cin >> productTwo.amount;

  cout << "How many " << productThree.name <<"s would you like to purchase?\n";
  cin >> productThree.amount;

  //validate
  char validation;
  cout << "\nJust to confirm, you'd like to purchase " << productOne.amount << " " << productOne.name << "s, "
      << productTwo.amount << " " << productTwo.name << "s, and "
      << productThree.amount << " " << productThree.name << "s? (Y/N)\n";
  cin >> validation;

  if(tolower(validation, std::locale()) == 'y'){
    totalPrice = (productOne.amount * productOne.price) + (productTwo.amount * productTwo.price) + (productThree.amount * productThree.price);

    cout << "\nRECEIPT" << endl;
    cout << string(50, '-') << endl;
    cout << productOne.amount << " "<< productOne.name << "(s) at " << currency << productOne.price << endl;
    cout << productTwo.amount << " " << productTwo.name << "(s) at " << currency << productTwo.price << endl;
    cout << productThree.amount << " " << productThree.name << "(s) at " << currency << productThree.price << endl;
    cout << string(12, '-') << endl;
    cout << "Total: " << currency;
    cout << totalPrice << setprecision(2);
    
  } else if (tolower(validation, std::locale()) == 'n'){
    cout << "I'm sorry your order was not correct. Please start your order again, and I'll get it right next time.";
  } else {
    cout << "Unknown response. Please try your order again";
  }
  
  return 0;
}