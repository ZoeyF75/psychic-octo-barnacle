#include <iostream>

using namespace std;

int getMax(int num1, int num2) {
  return num1 > num2 ? num1 : num2;
}

int main() {
  bool isMale = true;
  bool isTall = false;

  //has same operators and conditonal statements as JS
  if(isMale && isTall) {
    cout << "You are a tall male" << endl;
  } else if(isMale && !isTall) {
    cout << "You are a male" << endl;
  } else if(!isMale && isTall) {
    cout << "You are tall but not male";
  } else {
    cout << "You are not male" << endl;
  }

  cout << getMax(5, 2) << endl;
  
  return 0;
}