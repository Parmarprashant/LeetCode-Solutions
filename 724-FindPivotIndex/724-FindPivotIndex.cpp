// Last updated: 29/07/2026, 09:40:53
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        int sum = 0;
5
6        for (int num : nums)
7            sum += num;
8
9        int LeftSum = 0;
10
11        for (int i = 0; i < nums.size(); i++) {
12            int RightSum = sum - LeftSum - nums[i];
13
14            if (LeftSum == RightSum)
15                return i;
16
17            LeftSum += nums[i];
18        }
19
20        return -1;
21    }
22};