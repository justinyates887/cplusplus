#include <iostream>
using namespace std;

int main() {
  // 1. Create a program loop. Within the program loop...
  bool done = false;
  while(!done){
    
    // 2. Display a numbered menu of vending machine items.
    cout << "VENDING MACHINE" << endl;
    cout << string(30, '-') << endl;
    cout << "1. Can of Soda" << endl;
    cout << "2. Bottle of Water" << endl;
    cout << "3. Bag of Chips" << endl;
    cout << "4. Quit" << endl;

    // 3. Ask the user what they want to check the price of. Get their selection
    // as an integer.
    int selection;
    cout << "What would you like?" << endl;
    cin >> selection;

    // 4. Use a switch statement to check the value of the user's choice:
    switch(selection){
      case 1:
        cout << "Can of Soda: $1.29" << endl;
      break;
      case 2:
        cout << "Bottle of Water: $1.59" << endl;
      break;
      case 3:
        cout << "Bag of Chips: $2.10" << endl;
      break;
      case 4:
        cout << "Goodbye" << endl;
        done = true;
      break;
      default:
        cout << "Invalid Selection" << endl;
    }
  }
  return 0;
}
