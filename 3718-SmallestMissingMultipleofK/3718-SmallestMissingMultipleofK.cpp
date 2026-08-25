// Last updated: 25/08/2026, 09:58:30
1class Solution {
2public:
3    int missingMultiple(vector<int>& nums, int k) {
4        unordered_set<int> s(nums.begin(), nums.end());
5
6        for (int i = k; ; i += k) {
7            if (!s.count(i))
8                return i;
9        }
10    }
11};