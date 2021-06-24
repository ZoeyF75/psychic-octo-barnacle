#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> &A) {
    vector<int> R(N, 0);
    int length = A.size();
    int m = 0;
    int b = 0;
    for (int i = 0; i < length; i++) {
        if (A[i] <= N) {
        R[A[i]-1] = max(b, R[A[i] - 1]) + 1;
        m = max(m, R[A[i] - 1]);
        } else b=m;
    }
    length = R.size();
    for(int i = 0; i < length; i++) {
        if (R[i] < b) R[i] = b;
    }
    return R;
}

int main () {
  vector<int> sample;
  sample.push_back(3);
  sample.push_back(4);
  sample.push_back(4);
  sample.push_back(6);
  sample.push_back(1);
  sample.push_back(4);
  sample.push_back(4);

  vector<int> answer = solution(5, sample);
  int l = answer.size();
  for (int i = 0; i < l; i++) {
    cout << answer[i]; 
    if (i != l-1) {
      cout << ", ";
    }
  }
  cout << endl;

  //answer 3, 2, 2, 4, 2
}