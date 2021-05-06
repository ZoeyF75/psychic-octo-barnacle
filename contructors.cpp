#include <iostream>

using namespace std;

class Book {
  public:
    string title;
    string author;
    int pages;

    //constructor if no info is passed
    Book() {
      title = "no title";
      author = "no author";
      pages = 0;
    }

    Book(string aTitle, string aAuthor, int aPages) {
      //a for argument argument title
      title = aTitle;
      author = aAuthor;
      pages = aPages;
    }
};

int main ()
{
  Book book1("Harry Potter", "J.K. Rowling", 500);
  cout << book1.title << " is written by: " << book1.author << ". It has " << book1.pages << " pages." << endl;
  
  Book book2;
  cout << book2.title << endl;
  
  return 0;
}