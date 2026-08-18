// Last updated: 18/08/2026, 13:12:40
1class Solution {
2public:
3    int minOperations(vector<int>& nums) {
4       int moves = 0;
5        int prev = nums[0];
6
7        for (int i = 1; i < nums.size(); i++) {
8            if (nums[i] <= prev) {
9                moves += prev + 1 - nums[i];
10                nums[i] = prev + 1;
11            }
12
13            prev = nums[i];
14        }
15
16        return moves; 
17    }
18};