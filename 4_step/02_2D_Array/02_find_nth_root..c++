#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int NthRoot(int n, int m) {
        int low = 0;
        int high = n;

        while(low < high){
            int mid = low + (high - low) / 2;

            int found = pow(mid, m);

            if(found == n)return mid;

            if(found > n){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return -1;
    }
};

int main() {
    int n = 69;
    int m = 4;

    Solution s;
    cout << s.NthRoot(n, m);
}