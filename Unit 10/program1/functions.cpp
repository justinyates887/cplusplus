#include "functions.h"
#include <iostream>
#include <string>
using namespace std;

// Function definitions

void DisplayMenu() {
  // TODO: Add main menu (Completed 03/06/2023 by Justin Y)
  cout << string(30, '-') << endl;
  cout << "MAIN MENU" << endl;
  cout << "1. Show favorite movie" << endl;
  cout << "2. Show favorite book" << endl;
  cout << "3. EXIT" << endl;
}

int GetChoice(int min, int max) {
  int choice;
  cin >> choice;
  // TODO: Add error checking (Completed 03/06/2023 by Justin Y)
  while (choice < min || choice > max){
    cout << "Invalid selection! Please try again!" << endl << endl;

    cout << "Selection: ";
    cin >> choice;
  }
  return choice;
}

void DoSomething1() {
  // TODO: Add favorite movie (Completed 03/06/2023 by Justin Y)
  cout << "Avengers: Endgame" << endl;
}

void DoSomething2() {
  // TODO: Add favorite book (Completed 03/06/2023 by Justin Y)
  cout << "The Iliad - Homer" << endl;
}