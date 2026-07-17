// Last updated: 17/07/2026, 13:57:48
1class Solution {
2public:
3    int findLHS(vector<int>& nums) {
4        unordered_map<int, int> freq;
5
6        for (int num : nums) {
7            freq[num]++;
8        }
9
10        int ans = 0;
11
12        for (auto it : freq) {
13            if (freq.count(it.first + 1)) {
14                ans = max(ans, it.second + freq[it.first + 1]);
15            }
16        }
17
18        return ans;
19    }
20};