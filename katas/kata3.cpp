#include <iostream>

using namespace std;

//In this exercise, we will be counting the number of vowels that appear
//in a given string. For this exercise, consider the following to be vowels: 
//a, e, i, o, and u.
int numberOfVowels(string word) {
  int count = 0;
  for (int i = 0; i < word.length(); i++) {
    word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ? count++ : 0;
  }
  return count;
}

int main ()
{
  string test1 = "orange"; //3
  string test2 = "lighthouse labs"; //5
  string test3 = "aeiou"; //5

  cout << test1 << " has " << numberOfVowels(test1) << " of vowels." << endl;
  cout << test2 << " has " << numberOfVowels(test2) << " of vowels." << endl;
  cout << test3 << " has " << numberOfVowels(test3) << " of vowels." << endl;

  return 0;
}