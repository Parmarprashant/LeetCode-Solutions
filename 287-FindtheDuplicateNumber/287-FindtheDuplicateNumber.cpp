// Last updated: 17/07/2026, 14:39:02
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        for (int i = 1; i < nums.size(); i++) {
7            if (nums[i] == nums[i-1]) {
8                return nums[i];
9            }
10        }
11
12        return -1;
13    }
14};