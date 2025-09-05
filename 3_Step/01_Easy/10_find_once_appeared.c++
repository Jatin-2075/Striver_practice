#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int finder(vector <int> nums){
        int result = 0;
        for(int n : nums){
            result ^= n;
        }
        return result;
    }
};

int main() {
    vector <int> nums = {2,2,1};
    Solution s;
    cout << s.finder(nums);
}