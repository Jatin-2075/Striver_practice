#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long floorSqrt(long long n)  {
        int low = 0;
        int high = n;
        int found = 0;

        if(n == 0 || n == 1) return n;

        while(found == 0){
            int mid = low + (high - low) / 2;

            if(mid * mid > n){
                high = mid - 1;
            }
            if(mid * mid < n){
                low = mid + 1;
            }
            if(mid * mid == n){
                found = mid;
                return found;
            }
        }
    }
};

int main() {
    long long n = 64;
    
    Solution s;
    cout << s.floorSqrt(n);
}