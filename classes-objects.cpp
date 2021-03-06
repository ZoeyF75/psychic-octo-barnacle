#include <iostream>

using namespace std;

class Book {
  public:
    string title;
    string author;
    int pages;
    Book(string name) {
      cout << "Creating Object " << name << endl;
    }
};

int main ()
{
  Book book1("Harry Potter"); //Creating Object prints
  book1.title = "Harry Potter";
  book1.author = "J.K. Rowling";
  book1.pages = 500;

  Book book2("LOTR"); //Creating Object prints
  book2.title = "Lord of the Rings";
  book2.author = "Tolkein";
  book2.pages = 700;
  //can change title/properties
  book2.title = "Lord of the Rings 2";

  cout << book1.title << endl;
  cout << book2.author << endl;

  return 0;
}