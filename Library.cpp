#include "Library.h"

#include <iostream>
using namespace std;
#include <string>

#include "Book.h"
Library::Library() { size = 0; };  // Default constructor
Library::Library(int maxCapacity) {
  size = maxCapacity;
  shelf = new Book[size];
  count = 0;
};  // Constructor with maximum capacity
int Library::get_book_count() {
  return count;
};  // Returns the number of books in the library
bool Library::add_book(Book new_book) {
  if (count < size) {
    shelf[count] = new_book;
    count++;
    return true;
  } else {
    return false;
  }
};  // Adds a new book to the library if there is space
bool Library::has_book(string title1) {
  for (int i = 0; i < size; i++) {
    if (shelf[i].get_title() == "title1") {
      return true;
    } else {
      return false;
    }
  }
};  // Returns true if the library has a
    // book with the given title
Book* Library::get_books() {
  return shelf;
};  // Returns an array of books in the library
Library::~Library() { delete[] shelf; };  // Destructor