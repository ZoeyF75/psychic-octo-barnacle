#include <iostream>

using namespace std;

int main() {
  int num1, num2;
  char op;

  cout << "Enter first numer: ";
  cin >> num1;
  cout << "Enter operator ";
  cin >> op;
  cout << "Enter second numer: ";
  cin >> num2;

  int result;
  if (op == '+') {
  } else if (op == '-') {
    result = num1 - num2;
  } else if (op == '*') {
    result = num1 * num2;
  } else if (op == '/') {
    result = num1 / num2;
  } else {
    cout << "invalid operator";
  }

  cout << result << endl;

  return 0;
}