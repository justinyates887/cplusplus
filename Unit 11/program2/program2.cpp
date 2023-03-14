#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Functions.h"

int main() {
  cout << "POINTING TO VARIABLE ADDRESSES" << endl << endl;

  // 1. Create three float variables and assign values
  float floatOne = 1.99;
  float floatTwo = 2.99;
  float floatThree = 3.99;

  // 2. Create a float pointer and initialize it to nullptr
  float* ptr = nullptr;

  // 3. Display table of variable values
  DisplayTable(floatOne, floatTwo, floatThree);

  // 4. Ask the user which variable to point to.
  int selection;
  cout << "Point to which variable? (1, 2, 3): " << endl;
  cin >> selection;
  
  // 5. Assign ptr to an address based on user's selection
  switch (selection) {
    case 1:
      ptr = &floatOne;
      break;
    case 2:
      ptr = &floatTwo;
      break;
    case 3:
      ptr = &floatThree;
      break;
    default:
      cout << "Error, try again." << endl;
  }

  // 6. Display the address and value via the ptr
  cout << left;
  cout << setw(20) << "\nVALUE" << setw(20) << "ADDRESS"
       << endl
       << string(60, '-') << endl;

  cout << setw(20) << *ptr << setw(20) << ptr
       << endl;

  // 7. Ask the user to enter a new value for this item, assign via the ptr.
  cout << "\nPlease enter a new value: " << endl;
  cin >> *ptr;
  
  // 8. Display updated table
  DisplayTable(floatOne, floatTwo, floatThree);
}
