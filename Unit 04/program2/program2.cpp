#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main(){
  //variable declarations
  string name;
  string streetAddress;
  string city;
  string state;
  string zipcode;

  //input/output
  cout << "Please enter the name of the recipient: ";
  getline ( cin, name );
  cout << "Please enter the destination ZipCode: ";
  cin >> zipcode;
  cout << "Please enter the state or state abbreviation: ";
  cin >> state;
  cin.ignore();
  cout << "Please enter the destination city: ";
  getline( cin, city );
  cout << "Please enter the house number and street name: ";
  getline( cin, streetAddress );

  //Output
  cout << endl;
  cout << "PACKAGE TO BE SHIPPED TO: " << endl;
  cout << name << endl;
  cout << streetAddress << endl;
  cout << city << ", " << state << " " << zipcode << endl;
  
  return 0;
}