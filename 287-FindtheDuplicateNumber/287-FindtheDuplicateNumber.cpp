// Last updated: 17/07/2026, 14:46:15
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int ans;
6        for (int i = 0; i < nums.size(); i++) {
7           ans = nums[i] ^ nums[i+1];
8
9           if(ans == 0){
10            return nums[i];
11           }
12        }
13
14        return -1;
15    }
16};