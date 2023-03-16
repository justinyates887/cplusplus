#include "Functions.h"

#include <iostream>
using namespace std;

// Inputs: minimum and maximum valid values
// Outputs: The user's input, between min and max.
int GetChoice(int min, int max) {
  // 1. Create a `choice` variable. Ask the user to enter a number.
  // Store the user's selection in the `choice` variable.
  int choice;
  cout << "Please enter a number between " << min << " and " << max << endl;
  cin >> choice;

  // 2. Create a while loop: while `choice` is less than `min` OR
  // `choice1 is greater than `max`, then this is an invalid value.
  // In this case, display an error message and ask the user to enter
  // a new value. Store the new value back in the `choice` variable.
  while (choice < min || choice > max){
    cout << "ERROR: INVALID VALUE. PLEASE TRY AGAIN" << endl;
    cin >> choice;
  }

  // 3. At this point, `choice` should have a valid value thanks to
  // the while loop. Use a `return` statement to return the `choice`.
  return choice;
}

void DisplayQuestion() {
  cout << "What is the correct way to declare a pointer?" << endl;
  cout << "1. *int ptr;" << endl;
  cout << "2. int* ptr;" << endl;
  cout << "int ptr*" << endl;
  cout << "int ptr;" << endl;
}
