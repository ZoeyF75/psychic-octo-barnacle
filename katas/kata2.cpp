#include <iostream>

using namespace std;

//Create a function named conditionalSum that will be given an array of numbers 
//and a condition, in this case odd or even. Given this condition, add up only 
//the values which match that condition. If no values match the condition, return 0.
int conditionalSum(int arr[], string condition, int length) {
  int sum = 0;
  for (int i = 0; i < length; i++) {
    if (condition == "even") {
      arr[i] % 2 == 0 ? sum += arr[i] : 0;
    } else {
      arr[i] % 2 != 0 ? sum += arr[i] : 0;
    }
  }
  return sum;
}

int main ()
{
  int test1[5] = {1, 2, 3, 4, 5}; //even, odd 
  int test2[5] = {13, 88, 12, 44, 99}; //even
  int test3[5] = {}; //odd

  cout << "The sum is: " << conditionalSum(test1, "even", end(test1) - begin(test1)) << endl; //6
  cout << "The sum is: " << conditionalSum(test1, "odd", end(test1) - begin(test1)) << endl; //9
  cout << "The sum is: " << conditionalSum(test2, "even", end(test2) - begin(test2)) << endl; //144
  cout << "The sum is: " << conditionalSum(test3, "odd", end(test3) - begin(test3)) << endl; //0

  return 0;
}