// Last updated: 26/07/2026, 12:27:52
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int,int> mp;
5        vector<int> res;
6
7        for(int x : nums1) {
8            mp[x]++;
9        }
10
11        for(int x : nums2) {
12            if(mp[x] > 0) {
13                res.push_back(x);
14                mp[x]--;
15            }
16        }
17
18        return res;
19    }
20};