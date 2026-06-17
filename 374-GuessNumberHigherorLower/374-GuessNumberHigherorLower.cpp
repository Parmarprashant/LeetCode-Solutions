// Last updated: 17/06/2026, 21:32:05
1class Solution {
2public:
3    int maximumProduct(vector<int>& nums) {
4    sort(nums.begin(), nums.end());
5    int n = nums.size();
6
7    return max(
8        nums[n-1] * nums[n-2] * nums[n-3],
9        nums[0] * nums[1]* nums[n-1]
10    );
11    }
12};