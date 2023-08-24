#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;
#include <string>

class Book {
 private:
  string title;
  string author;
  int year;

 public:
  Book();  // Default constructor
  Book(string title1, string author1, int year1);
  string get_title();
  string get_author();
  int get_year();
};
#endif