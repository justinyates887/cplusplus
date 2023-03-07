#include <fstream>  /* Use ifstream */
#include <iostream> /* Use cout */
using namespace std;

#include "Math.h"
#include "MathTester.h"

int main(int argumentCount, char *argumentList[]) {
  /* Check for enough arguments */
  if (argumentCount < 2) {
    cout << "NOT ENOUGH ARGUMENTS" << endl;
    cout << "Expected forms:" << endl;
    cout << "(1) " << argumentList[0] << " sum" << endl;
    cout << "(2) " << argumentList[0] << " area" << endl;
    cout << "(3) " << argumentList[0] << " slope" << endl;
    cout << "(4) " << argumentList[0] << " tests" << endl;
    return 1; /* Exit with error code 1 */
  }

  string functionToRun = argumentList[1];

  if (functionToRun == "sum") {
    float a, b;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    float sum = Sum(a,b); // TODO: Replace this with a function call (Completed 03/06/2023 by Justin Y)

    cout << "Sum is: " << sum << endl;
  } else if (functionToRun == "area") {
    float width, length;

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter length: ";
    cin >> length;

    float area = Area(width , length); // TODO: Replace this with a function call (Completed 03/06/2023 by Justin Y)

    cout << "Area is: " << area << endl;
  } else if (functionToRun == "slope") {
    float x1, y1, x2, y2;

    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;

    float slope = Slope(x1, y1, x2, y2); // TODO: Replace this with a function call (Completed 03/06/2023 by Justin Y)

    cout << "Slope is: " << slope << endl;
  } else if (functionToRun == "tests") {
    // TODO: Call tests
    Test_Sum();
    Test_Area();
    Test_Slope();
    
  } else {
    cout << "UNKNOWN COMMAND" << endl;
  }

  /* Quit program with code 0 (no errors) */
  cout << "GOODBYE!" << endl;
  return 0;
}