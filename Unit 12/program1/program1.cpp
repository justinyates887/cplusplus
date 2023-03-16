#include <iostream>
using namespace std;

/*
 * EXAMPLE OUTPUT:
./program1 10
1 2 3 4 5 6 7 8 9 10
 * */

int main(int argCount, char *args[]) {
  // Error check: Enough arguments?
  if (argCount < 2) {
    cout << "NOT ENOUGH ARGUMENTS! Expected form: " << endl;
    cout << args[0] << " number" << endl;
    return 1;
  }

  // 1. Store args[1] as an integer named `max`.
  int max = stoi(args[1]);

  // 2. Create a `counter` variable, assign it to 1.
  int counter = 1;

  // 3. While the counter has not passed max...
  //    * Display the value of counter to the screen
  //    * Add 1 to the counter
  while (counter <= max){
    cout << counter << " ";
    counter ++;
  }

  return 0;
}
