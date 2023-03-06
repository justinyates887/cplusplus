#include <fstream>
#include <iostream>
#include <string>
using namespace std;

#include "Character.h"

int main(int argCount, char *args[]) {
  // 1. CHECK THAT THERE ARE ENOUGH ARGUMENTS
  // (Expected: 2, the program name and the input txt file)
  if (argCount < 2) {
    cout << "NOT ENOUGH ARGUMENTS" << endl;
    cout << "Expected form: " << args[0] << " INPUTFILE" << endl;
    return 1;
  }

  // 2. CREATE a myCharacter variable whose data type is a Character
  Character myCharacter;
  
  // 3. CREATE an input file stream variable. Use args[1] as the file to open.
  ifstream input(args[1]);

  // 4. READ the character's name and job with getline
  getline(input, myCharacter.name);
  getline(input, myCharacter.job);
  
  // 5. READ the character's level and money with >>
  input >> myCharacter.level;
  input >> myCharacter.money;
  
  // 6. CLOSE the input file
  input.close();

  // 7. DISPLAY character information and ask for updates
  cout << "Character Information Update:" << endl;
  cout << string('=', 30) << endl;
  
  cout << "Current character name: " << myCharacter.name << endl;
  cout << "Please enter new name: " << endl;
  getline(cin, myCharacter.name);

  cout << "Current character job: " << myCharacter.job <<endl;
  cout << "Please enter new job: " << endl;
  getline(cin, myCharacter.job);

  cout << "Current character level: " << myCharacter.level << endl;
  cout << "Please enter new name: " << endl;
  cin >> myCharacter.level;

  cout << "Current character balance: " << myCharacter.money << endl;
  cout << "Please enter new balance: " << endl;
  cin >> myCharacter.money;

  // 9. CREATE an output file stream and open the same character file (args[1])
  ofstream output(args[1]);

  // 10. WRITE the updated character information back into the file in this
  // order, each on their own line: Name Job Level Money
  output << myCharacter.name << endl;
  output << myCharacter.job << endl;
  output << myCharacter.level << endl;
  output << myCharacter.money << endl;
  
  // 11. DISPLAY a message to the screen that the character file was updated
  cout << "File " << args[1] << " updated successfully!" << endl;

  return 0;
}