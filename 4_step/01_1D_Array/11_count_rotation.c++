#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int low = 0;
        int high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid + 1] < nums[mid] && nums[mid] < nums[mid-1]){
                return mid;
            }
            else if(nums[mid+1] < nums[mid]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
};

int main() {
    vector <int> nums = {4, 5, 6, 7, 0, 1, 2, 3};

    Solution s;
    cout << s.findKRotation(nums);
}