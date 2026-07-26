// Last updated: 26/07/2026, 12:05:15
1class Solution {
2public:
3    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
4        set<int> s(nums1.begin(), nums1.end());
5        set<int> k(nums2.begin(), nums2.end());
6        vector<int> res;
7       for (int x : s) {
8    if (k.find(x) != k.end()) {
9        res.push_back(x);
10    }
11}
12
13        return res;
14    }
15};