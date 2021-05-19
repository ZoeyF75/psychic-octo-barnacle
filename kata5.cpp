#include <iostream>

using namespace std;

string encoded (string text) {
  string output = "";
  size_t first = text.find_first_not_of(' ');
  size_t last = text.find_last_not_of(' ');
  text = text.substr(first, (last-first+1));
  for (int i = 0; i < text.length(); i++) {
    text[i] == ' ' ? output += "%20" : output += text[i];
  }
  return output;
}

// In this exercise, we will be given a normal string of words and turn it into a percent-encoded string 
//by replacing all whitespace with %20.
int main ()
{
  cout << encoded("Lighthouse Labs") << endl;
  cout << encoded(" Lighthouse Labs ") << endl;
  cout << encoded("blue is greener than purple for sure") << endl;
  // expected output
  // Lighthouse%20Labs
  // Lighthouse%20Labs
  // blue%20is%20greener%20than%20purple%20for%20sure
  return 0;
}