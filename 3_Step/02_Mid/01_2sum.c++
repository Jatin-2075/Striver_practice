#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0 ; i < nums.size(); ++i){
            for(int j = 0; j < nums.size(); ++j){
                if(i == j) continue;
                int a = nums[i];
                int b = nums[j];
                int addition = a + b;
                if (target == addition){
                    return {i , j};
                }
            }
        }
        return {};
    }
};

int main() {
    vector <int> nums = {1,1,22,12,3,123,13};
    int target = 2;

    Solution s;
    s.twoSum(nums , target);
}