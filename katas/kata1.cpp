#include <iostream>

using namespace std;

int* fillarr(int arr[]) {
  return arr;
}

// In this exercise, we will be given an array of 2 or more numbers. We will then have to find the two largest numbers in that array, and sum them together.
int main ()
{
  int y[10] = {1 , 2};
  int *a = fillarr(y);
  cout << a[0] << endl;

  return 0;
}