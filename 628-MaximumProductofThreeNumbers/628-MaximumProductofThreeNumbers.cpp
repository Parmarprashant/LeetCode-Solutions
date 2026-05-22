// Last updated: 22/05/2026, 18:21:33
1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        int n = nums.size();
7
8        return max(
9            nums[n-1] * nums[n-2] * nums[n-3],
10            nums[0] * nums[1] * nums[n-1]
11        );
12    }
13};