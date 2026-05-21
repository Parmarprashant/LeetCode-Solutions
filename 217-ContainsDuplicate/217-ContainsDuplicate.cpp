// Last updated: 21/05/2026, 21:21:03
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        for(int i = 1; i < nums.size(); i++) {
7            if(nums[i] == nums[i - 1]) {
8                return true;
9            }
10        }
11
12        return false;
13    }
14};