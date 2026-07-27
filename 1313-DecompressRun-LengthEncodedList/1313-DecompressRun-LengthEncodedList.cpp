// Last updated: 27/07/2026, 23:03:19
1class Solution {
2public:
3    vector<int> decompressRLElist(vector<int>& nums) {
4        vector<int> res;
5
6        for (int i = 0; i < nums.size(); i += 2) {
7            int freq = nums[i];
8            int val = nums[i + 1];
9
10            for (int j = 0; j < freq; j++) {
11                res.push_back(val);
12            }
13        }
14
15        return res;
16    }
17};