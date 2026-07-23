// Last updated: 23/07/2026, 10:47:21
1class Solution {
2public:
3    int uniqueXorTriplets(vector<int>& nums) {
4        int n = nums.size();
5        if (n == 1) return 1;
6        if (n == 2) return 2;
7        // For n >= 3, return 2^(floor(log2(n)) + 1)
8        int k = 31 - __builtin_clz(n);  // floor(log2(n)) for n > 0
9        return 1 << (k + 1);
10    }
11};