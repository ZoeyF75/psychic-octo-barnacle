#include <vector>
#include <iostream>

using namespace std;

int convert (string substring) {
    if (substring.find('A') != std::string::npos) return 1;
    if (substring.find('C') != std::string::npos) return 2;
    if (substring.find('G') != std::string::npos) return 3;
    if (substring.find('T') != std::string::npos) return 4;
    return 0;
}

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    int queries = P.size();
    string selection = "";
    vector<int> impacts;
    int diff;
    for (int i = 0; i < queries; i++) {
        P[i] > Q[i] ? diff = P[i] - Q[i] + 1: diff = Q[i] - P[i] + 1;
        P[i] == Q[i] ? selection = S[P[i]] : selection = S.substr(P[i], diff);
        impacts.push_back(convert(selection));
    }
    return impacts;
}

int main() {
  string s = "CAGCCTA";
  vector<int> P;
  P.push_back(2);
  P.push_back(5);
  P.push_back(0);
  vector<int> Q;
  Q.push_back(4);
  Q.push_back(5);
  Q.push_back(6);

  vector<int> answer = solution(s, P, Q); 
  int length = answer.size();
  for (int i = 0; i < length; i++) {
    cout << answer[i]<< endl; //2, 4, 1
  }
  return 0;
}