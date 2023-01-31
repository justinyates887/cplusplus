#include <iostream>
#include <string>
using namespace std;

int main(int argCount, char* args[]) {

  int year = stoi( args[3] );
  float GPA = stof( args[4] );
  string name = args[1];
  string course = args[2];

  cout << "There are " << argCount << " arguments" << endl;
  cout << "Hello, World!" << endl;
  cout << "Hi, "<< name << "!" << endl;
  cout << "Welcome to " << course << "." << endl;
  cout << "The year is " << year << "."  << endl;
  cout << "Let's get a " << GPA << "."  << endl;

  year = 2023;
  GPA = 4.00;
  name = "Justin";
  course = "CS200";

  cout << "There are " << argCount << " arguments" << endl;
  cout << "Hello, World!" << endl;
  cout << "Hi, "<< name << "!" << endl;
  cout << "Welcome to " << course << "." << endl;
  cout << "The year is " << year << "."  << endl;
  cout << "Let's get a " << GPA << "."  << endl;

  return 0;
}