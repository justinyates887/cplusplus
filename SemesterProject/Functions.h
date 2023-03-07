#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

#include "Book.h"

void DisplayBook(Book bookOne, Book bookTwo, Book bookThree);
float CalculatePrice(Book bookOne, Book bookTwo, Book bookThree);
void DisplayReceipt(Book bookOne, Book bookTwo, Book bookThree, float totalPrice);

#endif