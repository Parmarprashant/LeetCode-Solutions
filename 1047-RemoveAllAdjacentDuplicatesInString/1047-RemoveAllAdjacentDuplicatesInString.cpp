// Last updated: 05/06/2026, 14:59:01
1class Solution {
2public:
3    string removeDuplicates(string s) {
4        string stack;
5        for (char c : s) {
6            if (!stack.empty() && stack.back() == c)
7                stack.pop_back();
8            else
9                stack.push_back(c);
10        }
11        return stack;
12    }
13};