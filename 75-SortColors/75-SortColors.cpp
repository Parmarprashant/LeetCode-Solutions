// Last updated: 29/07/2026, 14:17:12
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4          int n = nums.size();
5
6        for(int i = 0; i < n - 1; i++) {
7            for(int j = 0; j < n - i - 1; j++) {
8                if(nums[j] > nums[j + 1]) {
9                    swap(nums[j], nums[j + 1]);
10                }
11            }
12        }   
13    }
14};