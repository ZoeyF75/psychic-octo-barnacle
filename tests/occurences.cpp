#include <set>

vector <int> numbers (vector<int> &A) {
    vector<int> nums;
    int length = A.size();
    set<int> myset = {};   

    for (int i = 0; i < length; i++) {
        myset.insert(A[i]);
    }

    for (auto elem : myset){
        nums.push_back(elem);
    }

    return nums;
}

int count (vector<int> &set, vector<int> &A) {
    int lengthV = A.size();
    int lengthS = set.size();
    int occurences = 0;
    for (int i = 0; i < lengthS; i++) {
        for (int j = 0; j < lengthV; j++) {
         if (A[j] == set[i]) {
             occurences++;
         }
        }
        if (occurences % 2 != 0) {
            return set[i];
        }
        occurences = 0;
    }
    
    return 0;
}

int solution(vector<int> &A) {
    vector<int> nums = numbers(A);
    return count(nums, A);
}