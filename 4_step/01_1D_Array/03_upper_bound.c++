#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Search(vector<int> &nums, int target) {
        int low = 0;
        int high = nums.size();

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > target) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    } 
};

int main() {
    vector<int> nums = {1, 1, 2, 3, 5};
    int target = 3;

    Solution s;
    cout << s.Search(nums, target);
}
