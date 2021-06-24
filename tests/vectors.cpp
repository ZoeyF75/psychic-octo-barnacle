#include <iostream>
#include <vector>

using namespace std;

vector<int> rotate(vector<int> &A) {
    vector<int> rotated;
    int length = A.size();

    rotated.push_back(A[length - 1]);
    for (int i = 0; i < length - 1; i++) {
        rotated.push_back(A[i]);
    }

    return rotated;
}

vector<int> solution(vector<int> &A, int K) {
    
    vector<int> InputV = A;

    if (A.size() > 0) {
        for (int i = 0; i < K; i++) {
        InputV = rotate(InputV);
        }
    }
    
    return InputV;
}

int main () {
  vector<int> test;
  test.push_back(1);
  test.push_back(2);
  test.push_back(3);
  test.push_back(4);
  test.push_back(5);
  test.push_back(6);
  test.push_back(7);
  test.push_back(8);
  vector<int> rotatedV = solution(test, 3);
  for (int i = 0; i < test.size(); i++)
  {
    cout << rotatedV[i] << ", ";
  }
  cout << endl;

  return 0;
}