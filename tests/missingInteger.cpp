#include <algorithm>
#include <set>
#include <iostream>
#include <vector>

using namespace std;

vector<int> setArr (vector<int> &A, int l) {
    set<int> myset; 
    for (int i = 0; i < l; i++) {
        myset.insert(A[i]);
    }
    std::vector<int> output(myset.begin(), myset.end()); 
    return output;
}

int solution(vector<int> &A) {
    int length = A.size();

    int maxElement = *std::max_element(A.begin(), A.end());
    if (maxElement <= 0) return 1; //edge case
    A = setArr(A, length);
    sort(A.begin(), A.end());
    if (A[0] != 1) return 1; //edge case
    for (int i = 0; i < length; i++) {
        if (A[i] + 1 != A[i+1]) {
            return A[i] + 1;
        }
    }
    return A[length - 1] + 1;
}

int main () {
  vector<int> sample;
  sample.push_back(1);
  sample.push_back(2);
  sample.push_back(4);
  sample.push_back(3);
  sample.push_back(6);

  cout << solution(sample) << endl; //return 5
}