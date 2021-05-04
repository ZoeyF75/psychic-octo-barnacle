#include <iostream>

using namespace std;

int main ()
{
  int secretNum = 7;
  int guess;
  int guessCount = 0;
  int guessLimit = 3;
  bool outOfGuesses = false;

  while(guess != secretNum && !outOfGuesses) {
    cout << "Enter guess: ";
    cin >> guess;
    guessCount++;
    if (guessCount == guessLimit) outOfGuesses = true;
  }

  outOfGuesses ? 
  cout << "You lost! :(" << endl
  :
  cout << "You got it! the secret number is " << secretNum << endl;

  return 0;
}