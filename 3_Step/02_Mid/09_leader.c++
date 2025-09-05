#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leader(vector<int>& nums) {
        vector<int> leaders;
        int max_from_right = INT_MIN;

        for(int n = nums.size() - 1; n >= 0; --n){
            if(nums[n] > max_from_right){
                leaders.insert(leaders.begin(), nums[n]); // insert at front
                max_from_right = nums[n];
            }
        }

        return leaders;
    }
};

int main() {
    vector<int> nums = {1, 2, 5, 3, 1, 2};
    Solution s;
    vector<int> sol = s.leader(nums);

    for(auto it : sol) cout << it << " ";
}
