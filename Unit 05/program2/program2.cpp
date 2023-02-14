#include <iostream>
#include <iomanip>
using namespace std;

int main(int argCount, char *args[]){

  //Declare string vars
  string balanceStatement = "Current balance is: $";
  string overdrawNotice = "Error: Cannot withdraw more than remaining balance!";
  string successMessage = "You have successfully withdrawn: $";

  //Set out precision for financials
  cout << fixed << setprecision(2);

  //Get current balance and withdraw amount froms args
  float balance = stof(args[1]);
  float withdrawAmount = stof(args[2]);

  //Welcome message
  cout << "\nWelcome to Bank!" << endl;
  cout << string(50, '-') << endl;
  cout << balanceStatement << balance << endl;

  //Compute projected balance after withdraw
  balance -= withdrawAmount;

  //Check if balance is overdrawn
  if(balance < 0) cout << overdrawNotice << endl;
  else cout << successMessage << withdrawAmount << "\n" << balanceStatement << balance << endl;

return 0;  
}