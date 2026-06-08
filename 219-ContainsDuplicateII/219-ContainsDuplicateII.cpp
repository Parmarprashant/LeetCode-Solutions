// Last updated: 08/06/2026, 10:29:00
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_set<int> s;
5
6        for (int i = 0; i < nums.size(); i++) {
7
8            if (s.find(nums[i]) != s.end()) {
9                return true;
10            }
11
12            s.insert(nums[i]);
13
14            if (s.size() > k) {
15                s.erase(nums[i - k]);
16            }
17        }
18
19        return false;
20    }
21};