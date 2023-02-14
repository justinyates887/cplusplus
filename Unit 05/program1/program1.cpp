#include <iostream>
#include <iomanip>
using namespace std;

int main(int argCount, char *args[]){

  //Set out precision for financials
  cout << fixed << setprecision(2);

  //Get current balance froms args
  float balance = stof(args[1]);

  //Display current balance
  cout << "\nWelcome to Bank!" << endl;
  cout << string(50, '-') << endl;

  //Check if balance is overdrawn
  string balanceStatement = "Current balance is: $";
  if(balance < 0) cout << balanceStatement << balance << "OVERDRAWN"<< endl;
  else cout << balanceStatement << balance << endl;

return 0;  
}