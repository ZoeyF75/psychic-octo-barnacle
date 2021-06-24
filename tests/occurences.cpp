#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end()); //sort from first element to last element
    int length = A.size();
    for(int i = 0; i < length; i+=2) {
        if(A[i] != A[i+1]) return A[i];
    }
  return 0; //only returns if vector given is invalid
}

int main () {
  vector<int> sample;
  sample.push_back(2);
  sample.push_back(1);
  sample.push_back(1);
  sample.push_back(7);
  sample.push_back(2);

  cout << solution(sample) << endl; //return 7
}