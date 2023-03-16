#include <iostream>
using namespace std;

/* EXAMPLE OUTPUT
./program6 5
0 + 1 = 1
1 + 2 = 3
3 + 3 = 6
6 + 4 = 10
10 + 5 = 15
*/

int main(int argCount, char *args[]) {
  // Error check: Enough arguments?
  if (argCount < 2) {
    cout << "NOT ENOUGH ARGUMENTS! Expected form: " << endl;
    cout << args[0] << " number" << endl;
    return 1;
  }

  // 1. Store args[1] as an integer named `max`.
  int max = stoi(args[1]);

  // 2. Create a `counter` integer variable, assign it to 1.
  int counter = 1;

  // 3. Create a `sum` integer variable, assign it to 0.
  int sum = 0;

  // 4. While the counter hasn't hit the max yet:
  //    * Display the current value of `sum`, +, the current value of `counter`,
  //    and =.
  //    * Add `counter` to the `sum`.
  //    * Display the value of `sum`.
  //    * Add 1 to `counter`.
  while(counter <= max){
    cout << sum << " + " << counter << " = " << sum+counter <<endl;
    sum += counter;
    counter++;
  }

  return 0;
}
