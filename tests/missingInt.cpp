#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    if (A.empty()) return 1; //edge case
    sort(A.begin(), A.end());
    int length = A.size();
    for (int i = 0; i <length; i++) {
        if (A[i] != i+1) {
            return i + 1;
        }
    }
    return length + 1; //edge case
}

int main () {
  vector<int> sample;
  sample.push_back(1);
  sample.push_back(2);
  sample.push_back(4);
  sample.push_back(5);
  sample.push_back(6);

  cout << solution(sample) << endl; //return 3
}