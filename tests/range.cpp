#include <vector>
#include <iostream>

using namespace std;

int solution(int A, int B, int K) {
    vector<int> v;
    for (int i = A; i <= B; i++) {
        if (i % K == 0) {
            v.push_back(i);
        }
    }
    return v.size();
}

int main() {
  cout << solution(1, 10, 2); //prints 5
  return 0;
}