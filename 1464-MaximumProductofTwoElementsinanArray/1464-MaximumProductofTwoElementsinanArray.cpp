// Last updated: 27/07/2026, 16:49:21
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        int max1 = 0;
5        int max2 = 0;
6
7        for(int i = 0; i < nums.size(); i++) {
8            if(nums[i] > max1) {
9                max2 = max1;
10                max1 = nums[i];
11            }
12            else if(nums[i] > max2) {
13                max2 = nums[i];
14            }
15        }
16
17        return (max1 - 1) * (max2 - 1);
18    }
19};