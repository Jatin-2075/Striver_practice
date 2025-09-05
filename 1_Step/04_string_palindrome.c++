#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned;

        // Remove punctuation and spaces, convert to lowercase
        for (char c : s) {
            if (isalnum(c)) { // keep only alphanumeric
                cleaned.push_back(tolower(c));
            }
        }

        // Check palindrome by comparing front and back
        int left = 0, right = (int)cleaned.size() - 1;
        while (left < right) {
            if (cleaned[left] != cleaned[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};

int main() {
    Solution sol;

    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";

    cout << sol.isPalindrome(test1) << endl; // 1 (true)
    cout << sol.isPalindrome(test2) << endl; // 0 (false)

    return 0;
}
