#include <iostream>

int main(int argCount, char* args[]){

  std::cout << "FAVORITE BOOK \n" << std::endl;
  std::cout << "Title: The Illiad" << std::endl;
  std::cout << "Author: Homer" << std::endl;
  std::cout << "ISBN: 9780140275360 \n" << std::endl;
  std::cout << "My Rating: " << args[1] << "/5!" << std::endl;

  return 0;
}