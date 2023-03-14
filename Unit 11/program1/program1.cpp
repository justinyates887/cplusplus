#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
  cout << "VARIABLE SIZES AND ADDRESSES" << endl << endl;

  // 1. Declare variables
  float myFloat = 9.99;
  double myDouble = 10.99;
  string myString = "Hello!";
  int myInt = 9;
  bool myBool = true;

  //Header
  cout << left;
  cout << setw(20) << "VARIABLE" 
       << setw(10) << "VALUE" 
       << setw(10) << "SIZE"
       << setw(20) << "ADDRESS" << endl
       << string(60, '-') << endl;

  // 2. Display name, value, size, and memory address of each item
  
  //Float
  cout << setw(20) << "myFloat"          // Variable name
       << setw(10) << myFloat            // Variable value
       << setw(10) << sizeof(myFloat)    // Size of the variable
       << setw(20) << &myFloat << endl;  // Memory address of the variable
  //Double
  cout << setw(20) << "myDouble"          // Variable name
       << setw(10) << myDouble            // Variable value
       << setw(10) << sizeof(myDouble)    // Size of the variable
       << setw(20) << &myDouble << endl;  // Memory address of the variable
    //String
  cout << setw(20) << "myString"          // Variable name
       << setw(10) << myString            // Variable value
       << setw(10) << sizeof(myString)    // Size of the variable
       << setw(20) << &myString << endl;  // Memory address of the variable
    //Int
  cout << setw(20) << "myInt"          // Variable name
       << setw(10) << myInt            // Variable value
       << setw(10) << sizeof(myInt)    // Size of the variable
       << setw(20) << &myInt << endl;  // Memory address of the variable
    //Bool
  cout << setw(20) << "myBool"          // Variable name
       << setw(10) << myBool            // Variable value
       << setw(10) << sizeof(myBool)    // Size of the variable
       << setw(20) << &myBool << endl;  // Memory address of the variable
  return 0;
}
