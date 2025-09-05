#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int largest = nums[0];
        for(int n = 0; n < nums.size(); ++n){
            if(nums[n] >= largest){
                largest = nums[n];
            }
        }
        return largest;
    }
};

int main() {
    Solution s;
    vector <int> nums = {92,1,3,4,12,42};
    cout << "largest int is :" << s.largestElement(nums) << endl;
    return 0;
}