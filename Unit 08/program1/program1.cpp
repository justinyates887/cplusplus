#include <iostream>
using namespace std;

int main(int argCount, char *args[]) {
  // Check to make sure enough arguments were passed in
  if (argCount < 2) {
    cout << "NOT ENOUGH ARGUMENTS!" << endl;
    cout << "Expected form:" << endl;
    cout << args[0] << " BATTERYCHARGE" << endl;
    return 1;
  }

  // 1. Create a float variable to store the battery charge,
  // get its value from args[1].
  float batteryCharge = stof(args[1]);

  // 2. Display the current battery charge with a % after
  cout << "Current Battery Charge: " << batteryCharge << "%" << endl;
  
  // 3. Use an if/else if statement to draw a "battery" based
  // on the charge %:
  // 90 and above:    [####]
  // 75-90:           [###_]
  // 40-75:           [##__]
  // 10-40:           [#___]
  // Below 10:        [____]
  string displays[5] = {"[____]", "[#___]", "[##__]", "[###_]", "[####]"};
  string result;
  if (batteryCharge < 10) result = displays[0];
  else if (batteryCharge < 40) result = displays[1];
  else if (batteryCharge < 75) result = displays[2];
  else if (batteryCharge < 90) result = displays[3];
  else if (batteryCharge <= 100) result = displays[4];
  else result = "INVLAID CHARGE AMOUNT!";

  cout << batteryCharge <<"% \t" << result << endl;

  return 0;
}
