#include <iostream>

using namespace std;

int* fillarr(int arr[], int length, int largestNums[]) {
  int one = arr[0];
  int two = arr[1];
  for (int i = 0; i < length; i++) {
    cout << arr[i] << endl;
    if (arr[i] > one) {
      one = arr[i];
    } else if (arr[i] < one && arr[i] > two) {
      two = arr[i];
    }
  }
  largestNums[0] = one;
  largestNums[1] = two;
  return largestNums;
}

// In this exercise, we will be given an array of 2 or more numbers. We will then have to find the two largest numbers in that array, and sum them together.
int main ()
{
  int testArray[10] = {3 , 5, 1, 10, 7};
  int largestNums[2];
  int array_length = end(testArray) - begin(testArray);
  int *a = fillarr(testArray, array_length, largestNums);
  cout << "The biggest number: " << a[0] << endl;
  cout << "The second biggest number: " << a[1] << endl;

  return 0;
}