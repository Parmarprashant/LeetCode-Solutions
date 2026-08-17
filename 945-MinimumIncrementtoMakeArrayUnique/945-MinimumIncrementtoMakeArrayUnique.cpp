// Last updated: 17/08/2026, 13:25:22
1class Solution {
2public:
3    int minIncrementForUnique(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        int moves = 0;
7        int prev = nums[0];
8
9        for (int i = 1; i < nums.size(); i++) {
10            if (nums[i] <= prev) {
11                moves += prev + 1 - nums[i];
12                nums[i] = prev + 1;
13            }
14
15            prev = nums[i];
16        }
17
18        return moves;
19    }
20};