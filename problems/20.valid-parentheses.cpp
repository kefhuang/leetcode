/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (int i = 0; i < s.size(); i++) {
            switch (s[i]) {
                case '(': st.push('('); break;
                case ')': if (st.empty() || st.top() != '(') return false; st.pop(); break;
                case '[': st.push('['); break;
                case ']': if (st.empty() || st.top() != '[') return false; st.pop(); break;
                case '{': st.push('{'); break;
                case '}': if (st.empty() || st.top() != '{') return false; st.pop(); break;
            }
        }

        if (st.empty()) {
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end

