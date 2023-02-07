#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
  
  //Variable declarations
  char currency = '$';
  float totalPrice;
  
  float priceOne = 1.99;
  string nameOne = "Bean Burrito";
  int amountOne = 0;

  float priceTwo = 1.79;
  string nameTwo = "Crunchy Taco";
  int amountTwo = 0;

  float priceThree = 5.19;
  string nameThree = "Chicken Quesadilla";
  int amountThree = 0;

  //Print menu
  cout << "Take a look at our Menu!\n" << endl;
  cout << "Name" << setw(21) << "Price" << endl;
  cout << string(50, '-') << endl;
  cout << nameOne << setw(25 - nameOne.length()) << priceOne << endl;
  cout << nameTwo << setw(25 - nameTwo.length()) << priceTwo << endl;
  cout << nameThree << setw(25 - nameThree.length()) << priceThree << endl;

  //input/output stream
  cout << "\nHow many " << nameOne <<"s would you like to purchase?\n";
  cin >> amountOne;

  cout << "How many " << nameTwo <<"s would you like to purchase?\n";
  cin >> amountTwo;

  cout << "How many " << nameThree <<"s would you like to purchase?\n";
  cin >> amountThree;

  //validate
  char validation;
  cout << "Just to confirm, you'd like to purchase " << amountOne << " " << nameOne << "s, "
      << amountTwo << " " << nameTwo << "s, and "
      << amountThree << " " << nameThree << "s? (Y/N)\n";
  cin >> validation;

  if(tolower(validation, std::locale()) == 'y'){
    totalPrice = (amountOne * priceOne) + (amountTwo * priceTwo) + (amountThree * priceThree);

    cout << "\nRECEIPT" << endl;
    cout << string(50, '-') << endl;
    cout << amountOne << " "<< nameOne << "(s) at " << currency << priceOne << endl;
    cout << amountTwo << " " << nameTwo << "(s) at " << currency << priceTwo << endl;
    cout << amountThree << " " << nameThree << "(s) at " << currency << priceThree << endl;
    cout << string(12, '-') << endl;
    cout << "Total: " << currency << totalPrice << setprecision(2);
    
  } else if (tolower(validation, std::locale()) == 'n'){
    cout << "I'm sorry your order was not correct. Please start your order again, and I'll get it right next time.";
  } else {
    cout << "Unknown response. Please try your order again";
  }
  
  return 0;
}