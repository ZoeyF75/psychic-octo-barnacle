#include <set>
#include <iostream>
#include <vector>

using namespace std;

int solution(int X, vector<int> &A) {
    int length = A.size();
    set<int> myset; 
    int leafs = 0;
    for (int i = 0; i < length; i++) {
        myset.insert(A[i]);
        leafs = myset.size();
        if (leafs == X) return i;
    }
    return -1;
}

int main () {
  vector<int> sample;
  sample.push_back(1);
  sample.push_back(2);
  sample.push_back(4);
  sample.push_back(3);
  sample.push_back(6);

  cout << solution(3, sample) << endl; //return 4seconds
}