// Last updated: 27/07/2026, 23:08:07
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4        for(int num: nums){
5            if(num !=nums[0]){
6                return 1;
7            }
8        }
9
10        return 0;
11    }
12};