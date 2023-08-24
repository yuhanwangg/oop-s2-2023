#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>

#include "Book.h"
using namespace std;
#include <string>

class Library {
 private:
  int count = 0;
  int size = 0;
  Book* shelf;

 public:
  Library();                 // Default constructor
  Library(int maxCapacity);  // Constructor with maximum capacity
  int get_book_count();      // Returns the number of books in the library
  bool add_book(Book new_book);
  // Adds a new book to the library if there is space
  bool has_book(std::string title);  // Returns true if the library has a book
                                     // with the given title
  Book* get_books();                 // Returns an array of books in the library
  ~Library();                        // Destructor
};
#endif