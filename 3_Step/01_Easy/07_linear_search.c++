#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        int found = 0;
        for(int n = 0; n < nums.size(); n++){
            if(nums[n] == target){
                return n;
            }
        }
    }
};

int main() {
    int target ;
    cin >> target;
    vector <int> nums = {1,2,3,4,5,6,7,8,8};

    Solution s;
    s.linearSearch(nums, target);
    cout << s.linearSearch(nums, target);
}