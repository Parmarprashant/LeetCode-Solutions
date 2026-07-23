// Last updated: 23/07/2026, 13:51:06
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool inc = true;
5        bool dec = true;
6
7        for(int i = 1; i<nums.size(); i++){
8             if (nums[i] < nums[i - 1])
9                inc = false;
10
11            if (nums[i] > nums[i - 1])
12                dec = false;
13        }
14
15
16        return dec || inc;
17    }
18};