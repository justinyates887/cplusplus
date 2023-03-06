#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argCount, char *args[]) {
  // 1. CHECK THAT THERE ARE ENOUGH ARGUMENTS
  // (Expected: 2, the program name and the input txt file)
  if (argCount < 2) {
    cout << "NOT ENOUGH ARGUMENTS" << endl;
    cout << "Expected form: " << args[0] << " INPUTFILE" << endl;
    return 1;
  }

  // 2. CREATE a string variable named "buffer". This is where data will be
  // loaded to.
  string buffer;
  

  // 3. CREATE an input file stream named "input". Open the filename given by
  // "args[1]".
  ifstream input(args[1]);
  

  // VERSION 1
  // 4. READ one item from the text file into the buffer using
  // `getline(input, buffer);`
  getline(input, buffer);

  

  // 5. DISPLAY "READ IN" and the contents of the "buffer" variable.
  cout << "READ IN:" << buffer << endl;
  
 
  // 6. REPEAT Steps 4 and 5. Each time "input" will load in a
  // different thing from the file.
  getline(input, buffer);
  cout << "READ IN:" << buffer << endl;

  getline(input, buffer);
  cout << "READ IN:" << buffer << endl;

  getline(input, buffer);
  cout << "READ IN:" << buffer << endl;

  getline(input, buffer);
  cout << "READ IN:" << buffer << endl;
  
  return 0;
}