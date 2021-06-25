#include <vector>
#include <iostream>

using namespace std;

int solution(int A, int B, int K) {
  int c = (B/K) - (A/K);
  if (A % K == 0) c++;
  return c;

}

int main() {
  cout << solution(1, 10, 2); //prints 5
  return 0;
}