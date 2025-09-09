#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOccurrences(const vector<int>& nums, int target) {

        auto lower = lower_bound(nums.begin(), nums.end(), target);
        auto upper = upper_bound(nums.begin(), nums.end(), target);

        return upper - lower;
    }
};

int main() {
    vector<int> nums = {0,1,1,1,1,2,2};
    int target = 1;

    Solution s;
    cout << s.countOccurrences(nums, target);
}
