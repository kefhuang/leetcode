/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) return strs[0];

        string cur_common = strs[0];
        for (int i = 1; i < strs.size(); i++) {
            string common = "";
            string cur_string = strs[i];
            for (int j = 0; j < cur_common.size() && j < cur_string.size(); j++) {
                if (cur_common[j] == cur_string[j]) {
                    common += cur_common[j];
                } else {
                    break;
                }
            }
            cur_common = common;
        }
        return cur_common;
    }
};
// @lc code=end

