#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int Search(vector<int> &nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int lowestindex = nums.size(); // default = n (if not found)

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] >= target) {
                lowestindex = mid;     // possible answer
                high = mid - 1;        // but check left side also
            } else {
                low = mid + 1;         // move right
            }
        }
        return lowestindex;
    }
};

int main() {
    vector<int> nums = {0, 1, 6, 6, 6};
    int target = 6;
    Solution s;
    cout << s.Search(nums, target);
}
