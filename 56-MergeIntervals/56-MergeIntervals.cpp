// Last updated: 28/07/2026, 09:11:00
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        if(nums.empty()) return 0;
5
6        sort(nums.begin(), nums.end());
7
8        int longest = 1;
9        int current = 1;
10
11        for(int i = 1; i < nums.size(); i++) {
12            if(nums[i] == nums[i - 1]) {
13                continue;          
14            }
15            else if(nums[i] == nums[i - 1] + 1) {
16                current++;
17            }
18            else {
19                longest = max(longest, current);
20                current = 1;
21            }
22        }
23
24        longest = max(longest, current);
25
26        return longest;
27    }
28};