#include <iostream>

using namespace std;

//change first number if more than 4 instructors, 2 shouldn't have to change
string* instructorWithLongestName(string arr[4][2], int numOfInstructors, string longestName[]) {
  longestName[0] = arr[0][0];
  longestName[1] = arr[0][1];
  for (int i = 0; i < numOfInstructors; i++) {
    if (arr[i][0].length() > longestName[0].length()) {
      longestName[0] = arr[i][0];
      longestName[1] = arr[i][1];
    }
  }
  return longestName;
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

  string longestName[2]; //sets longest name to first one
  string *instructorAnswerOne = instructorWithLongestName(instructorsTestOne, 4, longestName);
  cout << "name: " << instructorAnswerOne[0]<< ", course: " << instructorAnswerOne[1] << endl;

  longestName[0] = "";
  longestName[1] = "";
  string *instructorAnswerTwo = instructorWithLongestName(instructorsTestTwo, 3, longestName);

  cout << "name: " << instructorAnswerTwo[0] << ", course: " << instructorAnswerTwo[1] << endl;

  return 0;
}