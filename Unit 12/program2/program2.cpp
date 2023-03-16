#include <iostream>
using namespace std;

/* EXAMPLE OUTPUT:
./program2 100
1 2 4 8 16 32 64
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

  // 2. Create a `counter` variable, assign it to 1.
  int counter = 1;

  // 3. While the counter has not passed max...
  //    * Display the value of counter to the screen
  //    * Multiply counter by 2
  while(counter <= max){
    cout << counter << " ";
    counter *= 2;
  }

  return 0;
}
