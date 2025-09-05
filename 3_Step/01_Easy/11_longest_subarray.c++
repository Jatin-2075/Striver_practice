#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void subarr(vector<int> &nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> sol;
        int ans = 0;

        for(int i = 0; i < nums.size(); i++) {
            sol.push_back(nums[i]);
            ans += nums[i];

            while(ans > target && !sol.empty()) {
                ans -= sol[0];
                sol.erase(sol.begin());
            }

            if(ans == target) {
                for(auto it : sol) cout << it << " ";
                cout << endl;
                sol.clear();
                ans = 0;
            }
        }
    }
};

int main() {
    vector<int> nums = {1,1,2,1,3,13,53};
    int target = 6;
    Solution a;
    a.subarr(nums, target);
}
