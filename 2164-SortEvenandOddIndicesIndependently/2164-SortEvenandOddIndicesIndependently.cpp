// Last updated: 27/07/2026, 22:53:56
1class Solution {
2public:
3    vector<int> sortEvenOdd(vector<int>& nums) {
4        vector<int> even, odd;
5
6        
7        for (int i = 0; i < nums.size(); i++) {
8            if (i % 2 == 0)
9                even.push_back(nums[i]);
10            else
11                odd.push_back(nums[i]);
12        }
13
14      
15        sort(even.begin(), even.end());
16        sort(odd.begin(), odd.end(), greater<int>());
17
18      
19        int e = 0, o = 0;
20        for (int i = 0; i < nums.size(); i++) {
21            if (i % 2 == 0)
22                nums[i] = even[e++];
23            else
24                nums[i] = odd[o++];
25        }
26
27        return nums;
28    }
29};