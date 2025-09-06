#include <bits/stdc++.h>
using namespace std;

class Solution {
    public :
    vector <int> search (vector <int> &nums, int target){
        int low = 0;
        int high = nums.size() - 1;

        vector <int> found;

        while(low <= high){
            int mid = low + (high - low) / 2;

            if(nums[mid] == target){
                if(nums[mid+1] > target && nums[mid-1] < target){
                    found.push_back(nums[mid-1]);
                    found.push_back(nums[mid+1]);
                }
                else if(nums[mid] < target){
                    low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
    }
};

int main() {
    vector <int> nums = {1,2,3,4,6};
    int target = 5;

    Solution s;
    vector <int> results = s.search(nums, target);

    for(auto result : results){
        cout << result << " ";
    }
}