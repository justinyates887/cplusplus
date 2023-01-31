#include <iostream>
using namespace std;

int main(int argCOunt, char *args[]){

  float num1 = stof( args[1] );
  float num2 = stof( args[2] );

  float sum = num1+num2;
  float diff = num1-num2;
  float prod = num1*num2;
  float quot = num1/num2;

  cout << num1 << '+' << num2 << '=' << sum << endl;
  cout << num1 << '-' << num2 << '=' << diff << endl;
  cout << num1 << '*' << num2 << '=' << prod << endl;
  cout << num1 << '/' << num2 << '=' << quot << endl;
  
  return 0;
}