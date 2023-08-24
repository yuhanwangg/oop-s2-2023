#include "Book.h"

#include <iostream>
#include <string>
using namespace std;

Book::Book() {
  title = "Null";
  author = "Null";
  year = 0;
};  // Default constructor
Book::Book(string title1, string author1, int year1) {
  title = title1;
  author = author1;
  year = year1;
};
string Book::get_title() { return title; };
string Book::get_author() { return author; };
int Book::get_year() { return year; };
