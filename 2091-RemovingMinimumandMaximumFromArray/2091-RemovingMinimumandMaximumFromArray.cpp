// Last updated: 30/08/2026, 11:26:10
1class Solution {
2public:
3    int minimumDeletions(vector<int>& nums) {
4        int n = nums.size();
5        int mn = 0, mx = 0;
6
7        for (int i = 1; i < n; i++) {
8            if (nums[i] < nums[mn]) mn = i;
9            if (nums[i] > nums[mx]) mx = i;
10        }
11
12        if (mn > mx) swap(mn, mx);
13
14        int left = mx + 1;
15        int right = n - mn;
16        int both = (mn + 1) + (n - mx);
17
18        return min({left, right, both});
19    }
20};