#include "Functions.h"

#include <iostream>
#include <iomanip>
using namespace std;

void DisplayTable(float &price1, float &price2, float &price3) {
  cout << left;
  cout << setw(20) << "VARIABLE" << setw(20) << "VALUE" << setw(20) << "ADDRESS"
       << endl
       << string(60, '-') << endl;

  cout << setw(20) << "price1" << setw(20) << price1 << setw(20) << &price1
       << endl;

  cout << setw(20) << "price2" << setw(20) << price2 << setw(20) << &price2
       << endl;

  cout << setw(20) << "price3" << setw(20) << price3 << setw(20) << &price3
       << endl;
  cout << endl;
}