// Last updated: 08/08/2026, 22:27:33
1class Solution {
2public:
3
4    void solve(vector<int>& nums, vector<vector<int>>& ans,
5               vector<int>& temp, vector<bool>& used) {
6
7        // permutation complete
8        if (temp.size() == nums.size()) {
9            ans.push_back(temp);
10            return;
11        }
12
13        for (int i = 0; i < nums.size(); i++) {
14
15            // already used
16            if (used[i])
17                continue;
18
19            // choose
20            used[i] = true;
21            temp.push_back(nums[i]);
22
23            // explore
24            solve(nums, ans, temp, used);
25
26            // undo / backtrack
27            temp.pop_back();
28            used[i] = false;
29        }
30    }
31
32    vector<vector<int>> permute(vector<int>& nums) {
33
34        vector<vector<int>> ans;
35        vector<int> temp;
36        vector<bool> used(nums.size(), false);
37
38        solve(nums, ans, temp, used);
39
40        return ans;
41    }
42};