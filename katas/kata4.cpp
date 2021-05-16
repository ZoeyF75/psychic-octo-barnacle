#include <iostream>

using namespace std;

//change first number if more than 4 instructors, 2 shouldn't have to change
string* instructorWithLongestName(string arr[4][2], int numOfInstructors) {
  for (int i = 0; i < numOfInstructors; i++) {
    cout << arr[i][0] << endl;
  }
}

//In this exercise, we will be given a list of instructors and have to determine 
//which instructor has the longest name.
int main ()
{
  string instructorsTestOne[4][2] = {
    {"Samuel", "iOS"},
    {"Jerimiah", "Web"},
    {"Ophilia", "Web"},
    {"Donald", "Web"}
  };

  string instructorsTestTwo[3][2] = {
    {"Matthew", "Web"},
    {"David", "iOS"},
    {"Domascus", "Web"}
  };

  string *instructorAnswerOne = instructorWithLongestName(instructorsTestOne, 4);
  string *instructorAnswerTwo = instructorWithLongestName(instructorsTestTwo, 3);

  return 0;
}