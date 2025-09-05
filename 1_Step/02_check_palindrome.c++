#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long rev = 0;
        long n = x;
        
        while(n > 0){
                int ld = n % 10;
                rev = (rev * 10) + ld;
                n /= 10;
        }
        if(rev == x) return true;
        else return false;
    }
};

int main() {
    int x = 2314;

    Solution s;
    cout << s.isPalindrome(x);
}