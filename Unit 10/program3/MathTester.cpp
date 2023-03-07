#include <fstream>  /* Use ifstream */
#include <iostream> /* Use cout */
#include <iomanip>
#include <string>
using namespace std;

#include "MathTester.h"
#include "Math.h"

void Test_Sum(){
  float input1, input2;
  float expected, actual;
  string display;
  cout << left;

  //Sum tests
  input1 = 5;
  input2 = 6;
  expected = input1 + input2;
  actual = Sum(input1 , input2);
  display = (actual = expected) ? "PASS" : "FAIL";
  
  cout << "Test_Sum 1..." << display << endl;
  cout << setw(10) << "input1: " << setw(10) << input1;
  cout << setw(10) << "input2: " << setw(10) << input2;
  cout << setw(10) << "expected: " << setw(10) << expected;
  cout << setw(10) << "actual: " << setw(10) << actual << endl;

  input1 = 12;
  input2 = 46;
  expected = input1 + input2;
  actual = Sum(input1 , input2);
  display = (actual = expected) ? "PASS" : "FAIL";
  
  cout << "Test_Sum 2..." << display << endl;
  cout << setw(10) << "input1: " << setw(10) << input1;
  cout << setw(10) << "input2: " << setw(10) << input2;
  cout << setw(10) << "expected: " << setw(10) << expected;
  cout << setw(10) << "actual: " << setw(10) << actual << endl;
}

void Test_Area(){
  float input1, input2;
  float expected, actual;
  string display;
  cout << left;

  //Area tests
  input1 = 5;
  input2 = 6;
  expected = input1 * input2;
  actual = Area(input1 , input2);
  display = (actual = expected) ? "PASS" : "FAIL";
  
  cout << "Test_Area 1..." << display << endl;
  cout << setw(10) << "input1: " << setw(10) << input1;
  cout << setw(10) << "input2: " << setw(10) << input2;
  cout << setw(10) << "expected: " << setw(10) << expected;
  cout << setw(10) << "actual: " << setw(10) << actual << endl;

  input1 = 12;
  input2 = 46;
  expected = input1 * input2;
  actual = Area(input1 , input2);
  display = (actual = expected) ? "PASS" : "FAIL";
  
  cout << "Test_Area 2..." << display << endl;
  cout << setw(10) << "input1: " << setw(10) << input1;
  cout << setw(10) << "input2: " << setw(10) << input2;
  cout << setw(10) << "expected: " << setw(10) << expected;
  cout << setw(10) << "actual: " << setw(10) << actual << endl;
}

void Test_Slope(){
  float inputX1, inputX2, inputY1, inputY2;
  float expected, actual;
  string display;
  cout << left;

  //Slope tests
  inputX1 = 5;
  inputX2 = 6;
  inputY1 = 5;
  inputY2 = 6;
  expected = (inputY2 - inputY1)/(inputX2-inputX1);
  actual = Slope(inputX1 , inputX2, inputY1, inputY2);
  display = (actual = expected) ? "PASS" : "FAIL";
  
  cout << "Test_Slope 1..." << display << endl;
  cout << setw(10) << "inputX1: " << setw(10) << inputX1;
  cout << setw(10) << "inputX2: " << setw(10) << inputX2;
  cout << setw(10) << "inputY1: " << setw(10) << inputY1;
  cout << setw(10) << "inputY2: " << setw(10) << inputY2;
  cout << setw(10) << "expected: " << setw(10) << expected;
  cout << setw(10) << "actual: " << setw(10) << actual << endl;

  inputX1 = 55;
  inputX2 = 66;
  inputY1 = 55;
  inputY2 = 66;
  expected = (inputY2 - inputY1)/(inputX2-inputX1);
  actual = Slope(inputX1 , inputX2, inputY1, inputY2);
  display = (actual = expected) ? "PASS" : "FAIL";
  
  cout << "Test_Slope 1..." << display << endl;
  cout << setw(10) << "inputX1: " << setw(10) << inputX1;
  cout << setw(10) << "inputX2: " << setw(10) << inputX2;
  cout << setw(10) << "inputY1: " << setw(10) << inputY1;
  cout << setw(10) << "inputY2: " << setw(10) << inputY2;
  cout << setw(10) << "expected: " << setw(10) << expected;
  cout << setw(10) << "actual: " << setw(10) << actual << endl;
}