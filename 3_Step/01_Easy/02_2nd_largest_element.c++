#include <bits/stdc++.h>
using namespace std;

class second_largest {
    public:
    int func(vector <int> &nums){
        int largest = nums[0];
        int s_l = 0;
        for(int n = 0; n < nums.size(); ++n){
            if(largest < nums[n]) largest = nums[n];
        }
        for(int n = 1; n < nums.size(); ++n){
            if(largest > nums[n] && nums[n] > nums[n - 1]){
                s_l = nums[n];
            }
        }
        return s_l;
    };
};


int main() {
    vector <int> nums = {1,5,2,67,9,10};
    second_largest sl;
    cout << "snd largest element : " << sl.func(nums) << endl;
}