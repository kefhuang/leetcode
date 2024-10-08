/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       if (nums.size() == 1) return 1;

       int cur = nums[0];
       int idx = 1;
       for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == cur)
                continue;
            cur = nums[i];
            nums[idx++] = cur;
       } 
       return idx;
    }
};
// @lc code=end

