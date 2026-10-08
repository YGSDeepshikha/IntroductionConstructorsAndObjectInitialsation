#include <iostream>
using namespace std;
// Library Class
class Library
{
int bookId;
string title
int copies;

public:
// Default Constructor
Library()
{
bookId = 0;
title = "None";
copies = 0;
}

// Parameterized Constructor
Library(int id, string t, int c)
{
bookId= id;
title = t;
copies=c;
}

// Copy Constructor
Library (Library &b)
{
bookId= b.bookId;
title= b.title;
copies = b.copies;
}
// Issue Book
void issue()
{
if (copies > 0) 
  copies--;
}

// Display Book Details
void display()
{
cout << "Book ID: <<<< bookId << endl;
cout << "Title: " << title << endl;
cout << "Copies: " << copies << endl;

cout <<"---------------"<< endl;

// Destructor
~Library()
{
cout << "Record deleted" << endl;
}
};

// Main Function
int main(){
  // Object Creation
  Library b1;                     // Default constructor
  Library b2(101, "C++", 5);      // Parameterized constructor
  Library b3 b2;                  // Copy constructor
  
  // Display Data
  b1.display();
  b2.display();
  b3.display()
    
  // Array of Objects
  Library arr[2] =
  { 
  Library (201, "DS", 3), Library (202, "OOP", 4)
  };
  // Operations
  for(int i = 0; i < 2; i++) {
    arr[i].display();
    arr[i].issue();
    arr[i].display();
  }
  
  return 0;
}
