// Last updated: 02/06/2026, 12:02:57
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> ans;
5
6        for (int i = 0; i < nums1.size(); i++) {
7            int x = nums1[i];
8            int idx = -1;
9
10            for (int j = 0; j < nums2.size(); j++) {
11                if (nums2[j] == x) {
12                    idx = j;
13                    break;
14                }
15            }
16
17            int nge = -1;
18            for (int j = idx + 1; j < nums2.size(); j++) {
19                if (nums2[j] > x) {
20                    nge = nums2[j];
21                    break;
22                }
23            }
24
25            ans.push_back(nge);
26        }
27
28        return ans;
29    }
30};