#include <cmath>
#include <list>
#include <iostream>

using namespace std;

string binary(int n) {
    int k = log2(n);
    string bin;
    for (int i = k; i>= 0; i--) {
        (n&(1<<i)) == 0? bin += "0" : bin += "1";
    }
    return bin;
}

int binGaps(string bin) {
    int l = bin.length();
    int ones = 0;
    int currentGap = 0;
    list<int> listOfInts;
    
    for (int i = 0; i < l; i++) {
        if (bin[i] == '1') {
            ones++;
        } else if (bin[i] == '0' && ones == 1) {
            currentGap++;
        }
        
        if (ones == 2) {
            if (currentGap == 0) {
                ones--;
            } else {
                listOfInts.push_back(currentGap);
                currentGap = 0;
                ones = 1;
            }
        } else if (ones == 3) {
            ones -= 2;
        }
    }
    listOfInts.sort();
    return listOfInts.back();
}

int solution(int N) {
    string binaryString = binary(N);
    return binGaps(binaryString);

    return 0;
}

int main () {
  cout << solution(100) << endl;
  cout << solution(9) << endl;
}