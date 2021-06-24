#include <iostream>
#include <vector>
#include <numeric>
#include <climits>

using namespace std;

int solution(vector<int> &A) {
  int length = A.size();
  if (length < 2) return 0;
  int sum = accumulate(A.begin(), A.end(), 0);
  int sumLeft = 0;
  int minDiff = INT_MAX;

  for (int i = 0; i < length; i++) {
    sumLeft += A[i];
    int diff = abs(2*sumLeft - sum);
    if (diff < minDiff) {
      minDiff = diff;
    }
  }
  return minDiff;
}

int main () {
  vector<int> sample;
  sample.push_back(1);
  sample.push_back(2);
  sample.push_back(4);
  sample.push_back(3);
  sample.push_back(6);

  cout << solution(sample) << endl; //return 4seconds
}