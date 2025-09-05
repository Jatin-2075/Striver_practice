#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long dig = 0;
        while(x != 0){
            int ld = x % 10;
            dig = dig * 10 + ld;
            x /= 10;
        }
        if (dig > INT32_MAX || dig < INT32_MIN) return 0;
        return (int)dig;
    }
};

int main() {
    int x = 2314;

    Solution s;
    cout << s.reverse(x);
}