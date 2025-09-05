#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sol(vector<int> arr1, vector<int> arr2) {
        vector<int> result;
        int i = 0, j = 0;

        while(i < arr1.size() && j < arr2.size()) {
            if(arr1[i] <= arr2[j]) {
                result.push_back(arr1[i]);
                i++;
            } else {
                result.push_back(arr2[j]);
                j++;
            }
        }

        // push remaining
        while(i < arr1.size()) {
            result.push_back(arr1[i]);
            i++;
        }
        while(j < arr2.size()) {
            result.push_back(arr2[j]);
            j++;
        }

        return result;
    }
};

int main() {
    vector<int> arr1 = {1,2,3,5,6};
    vector<int> arr2 = {4,7,8};
    Solution s;
    vector<int> merged = s.sol(arr1, arr2);

    for(int x : merged) cout << x << " ";
}

// doubt for now