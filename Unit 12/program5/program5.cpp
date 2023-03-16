#include <iostream>
using namespace std;

/* EXAMPLE OUTPUT:
./program5 5
Iteration 1/5
Iteration 2/5
Iteration 3/5
Iteration 4/5
Iteration 5/5
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

  // 3. While the counter hasn't hit the max yet:
  //    Display "Iteration", then the `counter`, then "/", then `max`.
  //    Add 1 to the `counter`.
  while(counter <= max){
    cout << "Iteration " << counter << "/" << max << endl;
    counter ++;
  }

  return 0;
}
