#include <iostream>

using namespace std;

//how to define function after main
void sayHi(string name, int age);

int main() {
  cout << "Top" << endl;
  sayHi("Zoey", 417);
  sayHi("Steve", 19);
  sayHi("George", 3);
  cout << "Bottom" << endl;

  return 0;
}

void sayHi(string name, int age){
  cout << "Hello " << name << ", you are " << age << " years old" << endl;
}