#include <iostream>
using namespace std;

#include "functions.h"

int main() {
  cout << "EXAMPLE PROGRAM" << endl;

  bool done = false;
  while (!done) {
    DisplayMenu();
    int choice = GetChoice(1, 3);
    cout << "You entered: " << choice << endl << endl;

    if (choice == 1) {
      DoSomething1();
    } else if (choice == 2) {
      DoSomething2();
    } else if (choice == 3) {
      // Exit
      done = true;
    }
  }

  cout << endl << "GOODBYE!" << endl;
  return 0;
}