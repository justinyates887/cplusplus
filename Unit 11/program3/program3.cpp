#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

#include "Student.h"
#include "Functions.h"

int main() {
  cout << "POINTING TO OBJECT ADDRESSES" << endl << endl;

  // 1. Create Student variables and assign values
  Student studentOne;
  studentOne.name = "Justin";
  studentOne.gpa = 3.52;

  Student studentTwo;
  studentTwo.name = "John";
  studentTwo.gpa = 4.00;

  Student studentThree;
  studentThree.name = "Amy";
  studentThree.gpa = 4.05;

  // 2. Create a Student pointer and initialize it to nullptr
  Student* ptr = nullptr;

  // 3. Display table of variable values
  DisplayTable(studentOne, studentTwo, studentThree);
  
  // 4. Ask the user which variable to point to.
  int selection;
  cout << "Which student would you like to point to? (1, 2, 3): " << endl;
  cin >> selection;

  // 5. Assign ptr to an address based on user's selection
  switch (selection) {
    case 1:
      ptr = &studentOne;
      break;
    case 2:
      ptr = &studentTwo;
      break;
    case 3:
      ptr = &studentThree;
      break;
    default:
      cout << "Error, try again." << endl;
  }

  // 6. Display the address and value via the ptr
  cout << "Pointer is now pointing to: " << ptr << endl;
  cout << "Name at that address is: " << ptr->name << endl;
  cout << "GPA at that address is: " << ptr->gpa << endl;

  // 7. Ask the user to enter a new value for this item, assign via the ptr.
  cout << "Please enter an updated name: " << endl;
  cin >> ptr->name;
  cout << "Please enter an updated GPA: " << endl;
  cin >> ptr->gpa;

  // 8. Display updated table
  DisplayTable(studentOne, studentTwo, studentThree);

  return 0;
}
