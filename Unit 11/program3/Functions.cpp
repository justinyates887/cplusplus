#include "Functions.h"

#include <iomanip>
#include <iostream>
using namespace std;

void DisplayTable(Student &student1, Student &student2, Student &student3) {
  cout << left << fixed << setprecision(1);
  cout << setw(20) << "VARIABLE" << setw(20) << "ADDRESS" << setw(20) << "NAME"
       << setw(20) << "GPA" << endl
       << string(80, '-') << endl;

  cout << setw(20) << "student1" << setw(20) << &student1 << setw(20)
       << student1.name << setw(20) << student1.gpa << endl;

  cout << setw(20) << "student2" << setw(20) << &student2 << setw(20)
       << student2.name << setw(20) << student2.gpa << endl;

  cout << setw(20) << "student3" << setw(20) << &student3 << setw(20)
       << student3.name << setw(20) << student3.gpa << endl;
  cout << endl;
}