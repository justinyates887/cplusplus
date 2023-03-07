#ifndef _BOOK_H
#define _BOOK_H

#include <string>
using namespace std;

struct Book {
  string title;
  string author;
  string ISBN;
  float price;
  int quantity;
  int rating;
};

#endif