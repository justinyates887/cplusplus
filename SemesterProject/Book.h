#ifndef _BOOK
#define _BOOK
#include <string>
using namespace std;

struct Book {
  string title;
  string author;
  string ISBN;
  float price;
  int rating;
  int quantity;
};

#endif