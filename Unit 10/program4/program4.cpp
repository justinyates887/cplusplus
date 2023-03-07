#include <iostream>
#include <iomanip>
#include <string>

#include "Functions.h"

int main()
{
  Book bookOne;
  bookOne.title = "The Enchiridion";
  bookOne.author = "Epictetus";
  bookOne.ISBN = "9781521560341";
  bookOne.price = 19.99;
  bookOne.rating = 5;
  bookOne.quantity = 4;

  Book bookTwo;
  bookTwo.title = "The Illiad";
  bookTwo.author = "Homer";
  bookTwo.ISBN = "9780140275360";
  bookTwo.price = 29.99;
  bookTwo.rating = 5;
  bookTwo.quantity = 2;

  Book bookThree;
  bookThree.title = "The Gay Science";
  bookThree.author = "Friedrich Nietzsche";
  bookThree.ISBN = "9798669217730";
  bookThree.price = 15.99;
  bookThree.rating = 5;
  bookThree.quantity = 1;

  DisplayBook(bookOne, bookTwo, bookThree);
  float total = CalculatePrice(bookOne, bookTwo, bookThree);

  cout << total;
  return 0;
}