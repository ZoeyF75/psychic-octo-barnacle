#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> maxIncrease (vector<int> &A, int l) {
    int maxElement = *std::max_element(A.begin(), A.end());
    vector<int> maxV(l, maxElement);
    return maxV;
}

vector<int> increment (int counter, vector<int> &A) {
    counter--; //gives the index postion
    A[counter] += 1;
    return A;
}

vector<int> solution(int N, vector<int> &A) {
    int max = N + 1;
    int length = A.size();
    vector<int> arr(N, 0); // 0, 0, 0, 0, 0 * N
    for (int i = 0; i < length; i++) {
        arr = A[i] == max ? maxIncrease(arr, N) : increment(A[i], arr);
    }
    return arr;
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