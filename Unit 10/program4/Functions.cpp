#include "Functions.h"

#include <iostream>
using namespace std;

void DisplayBook(Book bookOne, Book bookTwo, Book bookThree) {
  //Book One
  cout << "Title: " << bookOne.title<< endl;
  cout << "Author: " << bookOne.author << endl;
  cout << "ISBN: " << bookOne.ISBN  << endl;
  cout << "Price: $" << bookOne.price << endl;
  cout << "Rating: "<< bookOne.rating << "\n" << endl;

  // Book two
  cout << "Title: " << bookTwo.title << endl;
  cout << "Author: " << bookTwo.author << endl;
  cout << "ISBN: " << bookTwo.ISBN << endl;
  cout << "Price: $" << bookTwo.price << endl;
  cout << "Rating: " << bookTwo.rating << "\n" << endl;

  //Book Three
  cout << "Title: " << bookThree.title << endl;
  cout << "Author: " << bookThree.author << endl;
  cout << "ISBN: " << bookThree.ISBN << endl;
  cout << "Price: $" << bookThree.price << endl;
  cout << "Rating: "<< bookThree.rating << "\n" << endl;
}

float CalculatePrice(Book bookOne, Book bookTwo, Book bookThree) {
  // calculate price
  return (bookOne.quantity * bookOne.price) + (bookTwo.quantity * bookTwo.price) + (bookThree.quantity * bookThree.price);
}