// Last updated: 24/06/2026, 10:05:53
1class Solution {
2public:
3    bool valid(long long sum, int x) {
4        if (sum % 10 != x) return false;
5
6        long long first = sum;
7        while (first >= 10)
8            first /= 10;
9
10        return first == x;
11    }
12
13    int countValidSubarrays(vector<int>& nums, int x) {
14        int n = nums.size();
15        int ans = 0;
16
17        for (int i = 0; i < n; i++) {
18            long long sum = 0;
19
20            for (int j = i; j < n; j++) {
21                sum += nums[j];
22
23                if (valid(sum, x))
24                    ans++;
25            }
26        }
27
28        return ans;
29    }
30};