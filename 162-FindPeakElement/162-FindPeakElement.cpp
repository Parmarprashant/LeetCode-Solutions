// Last updated: 09/05/2026, 23:29:11
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int maxi = nums[0];
5        int index = 0;
6
7        for(int i = 1; i < nums.size(); i++) {
8            if(nums[i] > maxi) {
9                maxi = nums[i];
10                index = i;
11            }
12        }
13
14        return index;
15    }
16};