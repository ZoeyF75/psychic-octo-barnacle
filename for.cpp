#include <iostream>

using namespace std;

int main ()
{
  int nums[] = {1, 2, 5, 7, 3};
  int array_length = end(nums) - begin(nums);

  for (int i = 0; i < array_length; i++)
  {
    cout << nums[i] << endl;
  }
  
}