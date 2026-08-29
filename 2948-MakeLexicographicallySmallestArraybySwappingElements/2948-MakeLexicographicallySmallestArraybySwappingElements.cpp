// Last updated: 29/08/2026, 20:40:01
1class Solution {
2public:
3    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
4        int n = nums.size();
5
6        vector<int> idx(n);
7        iota(idx.begin(), idx.end(), 0);
8
9        sort(idx.begin(), idx.end(), [&](int a, int b) {
10            return nums[a] < nums[b];
11        });
12
13        vector<int> ans(n);
14
15        for (int i = 0; i < n; ) {
16            int j = i + 1;
17
18            while (j < n && nums[idx[j]] - nums[idx[j - 1]] <= limit)
19                j++;
20
21            vector<int> pos(idx.begin() + i, idx.begin() + j);
22            sort(pos.begin(), pos.end());
23
24            for (int k = 0; k < pos.size(); k++)
25                ans[pos[k]] = nums[idx[i + k]];
26
27            i = j;
28        }
29
30        return ans;
31    }
32};