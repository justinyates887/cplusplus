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

void DisplayReceipt(Book bookOne, Book bookTwo, Book bookThree, float totalPrice){
  cout << "\nRECEIPT" << endl;
  cout << string(50, '-') << endl;
  cout << bookOne.title << " by " << bookOne.author << ": $" << bookOne.quantity * bookOne.price << endl;
  cout << bookTwo.title << " by " << bookTwo.author << ": $" << bookTwo.quantity * bookTwo.price << endl;
  cout << bookThree.title << " by " << bookThree.author << ": $" << bookThree.quantity * bookThree.price << endl;
  cout << string(20, '-') << endl;
  cout << "Total: $" << totalPrice << endl;
}