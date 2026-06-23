// Last updated: 23/06/2026, 13:26:36
1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        int i = m - 1, j = n - 1, k = m + n - 1;
5
6        while (i >= 0 && j >= 0) {
7            if (nums1[i] > nums2[j])
8                nums1[k--] = nums1[i--];
9            else
10                nums1[k--] = nums2[j--];
11        }
12
13        while (j >= 0)
14            nums1[k--] = nums2[j--];
15    }
16};