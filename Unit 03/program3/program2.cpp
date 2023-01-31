#include <iostream>
using namespace std;

int main(int argCount, char* args[]){

  string title = "The Illiad";
  string author = "Homer";
  string ISBN = "9780140275360";
  float price = 19.99;
  int rating = stoi( args[1] );

  cout << "FAVORITE BOOK \n" << endl;
  cout << "Title: " << title << endl;
  cout << "Author: " << author << endl;
  cout << "ISBN:  " << ISBN << endl;
  cout << "Price:  " << price << "\n" << endl;
  cout << "My Rating: " << args[1] << "/5!" << endl;

  return 0;
}