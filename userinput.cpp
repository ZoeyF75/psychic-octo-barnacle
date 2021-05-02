#include <iostream>

using namespace std;

int main ()
{
  // int age;
  // cout << "Enter your age: ";
  // //can use this for numbers and characters
  // cin >> age;
  // cout << "You are " << age << " years old" << endl;

  string name;
  cout << "Enter your name ";
  getline(cin, name);
  cout << "Hello " << name << endl; 

  return 0;
}