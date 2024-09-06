/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int getNum(char c) {
        switch (c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        }
        return 0;
    }

    int romanToInt(string s) {
        int answer = 0;
        int *nums = new int[s.size()];

        for (int i = 0; i < s.size(); i++) {
            nums[i] = getNum(s[i]);
        }

        for (int i = 0; i < s.size(); i++) {
            if (i == s.size() - 1) {
                answer += nums[i];
                break;
            }

            if (nums[i] < nums[i + 1]) {
                answer += nums[i + 1] - nums[i];
                i++;
            } else {
                answer += nums[i];
            }
        }

        return answer;
    }
};
// @lc code=end

