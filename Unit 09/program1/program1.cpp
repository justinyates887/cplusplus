#include <iostream>
using namespace std;

/*
NOTE! When running the program, for multiplication, use \*:
./a.out 1 \* 2
the other operators are fine:
./a.out 1 + 2
*/

int main(int argCount, char *args[]) {
  if (argCount < 4) {
    cout << "NOT ENOUGH ARGUMENTS!" << endl;
    cout << "Expected program call:" << endl;
    cout << args[0] << "NUM1 OPERATION NUM2" << endl;
    return 1;
  }

  // 1. Variable declarations:
  // Store args1 as a float variable `number`
  float number = stof(args[1]);
  // Store args2 as a char variable `operation`
  char operation = *(args[2]);
  // Store args3 as a float variable `number2`
  float number2 = stof(args[3]);
  // Create a float variable called `result`, initialize it to 0.
  float result = 0.0;

  // 2. Switch statement on the `operation`:
  // * Case '+', add number1 to number2 and store the result.
  // * Case '-', add number1 to number2 and store the result.
  // * Case '*', add number1 to number2 and store the result.
  // * Case '/', add number1 to number2 and store the result.
  // * Default: Display "unknown operation!"
  switch (operation){
    case '+':
      result = number + number2;
    break;
    case '-':
      result = number - number2;
    break;
    case '*':
      result = number * number2;
    break;
    case '/':
      result = number / number2;
    break;
    default:
      return 1;
  }

  // 3. Display the resulting math operation at the end.
  cout << number << operation << number2 << '=' << result;

  return 0;
}
