#include <iostream>

using namespace std;

int main ()
{
  int index = 6;

  //checks condition first
  while(index <= 5) {
    cout << index << endl;
    index++;
  }
  //does once then checks condition
  do{
    cout << index << endl;
    index++;
  } while(index <=5);

  return 0;
}