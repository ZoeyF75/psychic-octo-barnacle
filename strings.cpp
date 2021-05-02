#include <iostream>

using namespace std;

int main ()
{
  string phrase = "Giraffe Academy";
  //variable
  cout << phrase << endl;
  //newline
  cout << "Giraffe Academy\n";
  cout << "Hello" << endl;
  //length function
  cout << phrase.length() << endl;
  //access 1st letter
  cout << phrase[0] << endl;
  // change character in string
  phrase[0] = 'B';
  cout << phrase << endl;
  // find function, returns 8 Academy is at index of 8
  cout << phrase.find("Academy", 0) << endl;
  cout << phrase.find("ffe", 0) << endl;
  // take substring of text start index and length
  string phrasesub = phrase.substr(8,3);
  cout << phrasesub;

  return 0;
}