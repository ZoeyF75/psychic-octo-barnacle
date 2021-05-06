#include <iostream>

using namespace std;

int main ()
{
  int age = 19;
  int *pAge = &age;
  double gpa = 2.7;
  double *pGpa = &gpa;
  string name = "Mike";
  string *pName = &name;

  //prints out memory adress where age is stored
  //these are known as pointers
  cout << "Age: " << &age << endl;
  cout << "GPA: " << &gpa << endl;
  cout << "Name: " << &name << endl;

  //uses pointer variables
  cout << "Age: " << pAge << endl;
  cout << "GPA: " << pGpa << endl;
  cout << "Name: " << pName << endl;

  //dereferencing pointer, gives actual value
   cout << "Age: " << *pAge << endl;
   cout << "GPA: " << *&gpa << endl;
  return 0;
}