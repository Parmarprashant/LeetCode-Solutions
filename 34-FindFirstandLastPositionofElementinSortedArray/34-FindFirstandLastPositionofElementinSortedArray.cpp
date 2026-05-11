// Last updated: 11/05/2026, 23:44:27
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4
5        int first = -1;
6        int last = -1;
7
8        for(int i = 0; i < nums.size(); i++) {
9
10            if(nums[i] == target) {
11
12                if(first == -1) {
13                    first = i;
14                }
15
16                last = i;
17            }
18        }
19
20        return {first, last};
21    }
22};