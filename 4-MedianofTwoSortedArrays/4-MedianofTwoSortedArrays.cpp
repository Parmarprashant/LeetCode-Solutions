// Last updated: 27/05/2026, 17:12:13
1class Solution {
2public:
3    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
4        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
5
6        sort(nums1.begin(), nums1.end());
7
8        int n = nums1.size();
9
10        if (n % 2 == 1) {
11            return nums1[n / 2];
12        } 
13        else {
14            return (nums1[n/2 - 1] + nums1[n/2]) / 2.0;
15        }
16    }
17};