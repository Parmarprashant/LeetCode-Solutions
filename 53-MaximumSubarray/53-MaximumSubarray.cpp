// Last updated: 30/07/2026, 16:45:02
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int sum = 0;
5        int maxSum = nums[0];
6
7        for(int i = 0; i<nums.size(); i++){
8            sum = max( nums[i] , (sum + nums[i]));
9            maxSum = max(maxSum,sum);
10            
11        }
12
13
14        return maxSum;
15    }
16};