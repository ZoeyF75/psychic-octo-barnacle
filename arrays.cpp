#include <iostream>

using namespace std;

int main() {
  //want to be able to store 20 elements in array
  int luckyNums[20] = {4, 8, 15, 16, 23, 42};
  luckyNums[0] = 19;
  luckyNums[10] = 100;
  cout << luckyNums[0] << endl;
  cout << luckyNums[10] << endl;

  int unLuckyNums[20];
  unLuckyNums[0] = -7;
  cout << unLuckyNums[0] << endl;

  
  

  return 0;
}