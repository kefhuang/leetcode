/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        long reversed = 0;
        long remain = x;
        while (remain != 0) {
            reversed = reversed * 10 + remain % 10;
            remain = remain / 10;
        }

        if (reversed == x) {
            return true;
        }
        return false;
    }
};
// @lc code=end

