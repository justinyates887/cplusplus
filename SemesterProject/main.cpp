#include <iostream>
#include <string>
using namespace std;

int main(int argCount, char* args[]){

  // Initialize variables for three books and their values

  string titleOne = "The Enchiridion";
  string titleTwo = "The Illiad";
  string titleThree = "The Gay Science";

  string authorOne = "Epictetus";
  string authorTwo = "Homer";
  string authorThree = "Friedrich Nietzsche";

  string isbnOne = "9781521560341";
  string isbnTwo = "9780140275360";
  string isbnThree = "9798669217730";

  float priceOne = 19.99;
  float priceTwo = 29.99;
  float priceThree = 15.99;

  int ratingOne = 5;
  int ratingTwo = 5;
  int ratingThree = 5;

  /* This section of code is a static reference to three books, written to the    console.*/
  cout << "BOOKSTORE \n" << endl;

  //Book One
  cout << "Title: " << titleOne<< endl;
  cout << "Author: " << authorOne << endl;
  cout << "ISBN: " << isbnOne  << endl;
  cout << "Price: $" << priceOne << endl;
  cout << "Rating: "<< ratingOne << "\n" << endl;

  // Book two
  cout << "Title: " << titleTwo << endl;
  cout << "Author: " << authorTwo << endl;
  cout << "ISBN: " << isbnTwo << endl;
  cout << "Price: $" << priceTwo << endl;
  cout << "Rating: "<< ratingTwo << "\n" << endl;

  //Book Three
  cout << "Title: " << titleThree << endl;
  cout << "Author: " << authorThree << endl;
  cout << "ISBN: " << isbnThree << endl;
  cout << "Price: $" << priceThree << endl;
  cout << "Rating: "<< ratingThree << "\n" << endl;

  return 0;
}