#include <fstream>
#include <iostream>
#include <string>
using namespace std;

#include "Account.h"

int main(int argCount, char *args[]) {
  // 1. CHECK THAT THERE ARE ENOUGH ARGUMENTS
  // (Expected: 2, the program name and the input txt file)
  if (argCount < 2) {
    cout << "NOT ENOUGH ARGUMENTS" << endl;
    cout << "Expected form: " << args[0] << " INPUTFILE" << endl;
    return 1;
  }

  // 2. CREATE an Account variable named `myAccount`.
  Account myAccount;
  
  // 3. CREATE an input file stream variable named `input`. Open the file stored
  // in `args[1]`.
  ifstream input(args[1]);
  
  // 4. READ in the account name, a string, using `getline(input,
  // myAccount.name);`
  getline(input, myAccount.name);
  
  // 5. READ the account balance, a float, using `input >> myAccount.balance;`
  input >> myAccount.balance;
  
  // 6. CLOSE the input file
  input.close();
  
  // 7. DISPLAY the current account name and balance, ask the user to enter
  // updated info for each.
  cout << "Current account name: " << myAccount.name << endl;
  cout << "Please enter a new account name: " << endl;
  getline(cin, myAccount.name);

  cout << endl
      << "Current account balance: " << myAccount.balance << endl;
  cout << "New account balance: ";
  cin >> myAccount.balance;

  // 8. CREATE an output file stream variable named `output`. Open `args[1]` as
  // the file.
  ofstream output(args[1]);

  // 9. WRITE the new account name and balance to the file, each on their own
  // line
  output << myAccount.name << endl;
  output << myAccount.balance << endl;
  
  // 10. CLOSE the output file.
  output.close();
  
  // 11. DISPLAY a message to the screen that the file has been updated. Use
  // args[1] to tell the user which file it is.
  cout << endl
    <<"File " << args[1]
    <<" has been updated" << endl;
  
  return 0;
}