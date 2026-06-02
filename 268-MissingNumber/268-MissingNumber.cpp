// Last updated: 02/06/2026, 14:02:31
1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        int n = nums.size();
5        int expected = n * (n + 1) / 2;
6        int actual = 0;
7
8       for(int i = 0; i<n; i++){
9        actual += nums[i];
10       }
11
12        return expected - actual;
13    }
14};