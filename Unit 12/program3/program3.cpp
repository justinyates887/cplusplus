#include <iostream>
using namespace std;

#include "Functions.h"

int main(int argCount, char *args[]) {
  // 1. Call DisplayQuestion
  DisplayQuestion();

  // 2. Create a `choice` int variable. Call the GetChoice
  // function, which is responsible for getting valid user input.
  int choice = GetChoice(1,4);
  // 3. If choice is the correct option (1, 2, 3, or 4, whatever you choose),
  // then display "Correct!". If they got it wrong, display "Wrong!".
  (choice == 1) ? cout << "Correct!" << endl : cout << "Wrong! Try Again!" << endl;

  return 0;
}
