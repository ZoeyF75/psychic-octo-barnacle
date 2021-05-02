#include <iostream>
#include <cmath> //import math functions

using namespace std;

int main ()
{
  //print out 12
  cout << 5 + 7 << endl;
  //modulous operator, same as in JS
  cout << 10 % 3 << endl;
  //order of operations
  cout << (4 + 5) * 10 << endl;

  int wnum = 5;
  double dnum = 5.5;
  //increment, same as JS and += and -=
  wnum++;
  cout << wnum << endl;
  //prints out decimal number when dec and whole combined
  cout << 5.5 + 9 << endl;
  //get int number back... 3
  cout << 10 / 3 << endl;
  //vs if one or both is decimal
  cout << 10.0 / 3 << endl;

  //math functions
  //exponent or power
  cout << pow(2, 5) << endl;
  //squareroot
  cout << sqrt(36) << endl;
  //round a number
  cout << round(4.5) << endl;
  //ceil automatically round up, floor is down, both will be 5
  cout << ceil(4.2) << endl;
  cout << floor(5.7) << endl;
  //returns bigger number
  cout << fmax(3, 10) << endl;
  //returns smaller number
  cout << fmin(3, 10);
  
  return 0;
}