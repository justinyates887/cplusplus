#include <iostream>

int main(int argCount, char* args[]) {

  std::cout << "There are " << argCount << " arguments" << std::endl;
  std::cout << "Hello, World!" << std::endl;
  std::cout << "Hi, "<< args[1] << "!" << std::endl;
  std::cout << "Welcome to " << args[2] << "." << std::endl;
  std::cout << "The year is " << args[3] << "."  << std::endl;
  std::cout << "Let's get a " << args[4] << "."  << std::endl;

  return 0;
}