#include <iostream>
using namespace std;

/* EXAMPLE OUTPUT:
SUM: 0
Enter a number to add, or -1 to stop: 4

SUM: 4
Enter a number to add, or -1 to stop: 3

SUM: 7
Enter a number to add, or -1 to stop: 5

SUM: 12
Enter a number to add, or -1 to stop: -1

Final sum value: 12
*/

int main() {
  // 1. Create an int variable named `sum` and initialize it to `0`.
  int sum = 0;

  // 2. Create an int variable named `input` and initialize it to `0`.
  int input = 0;

  // 3. While true...
  //    * Display the current value of the `sum` variable.
  //    * Ask the user to enter a number to add, OR enter -1 to stop.
  //    * Get the user's input, store it in the `input` variable.
  //    * If `input` is -1, use `break;` to leave the loop.
  //    * Otherwise, add `input` to `sum`.
  while (true){
    cout << "SUM: " << sum << endl;
    cout <<"Enter a number to add, or -1 to stop: ";
    cin >> input;
    if(input == -1){
      break;
    } else {
      sum += input;
    }
  }

  // 4. After the while loop, display the final value of `sum`.
  cout << "Final Sum Value: " << sum;

  return 0;
}
