// Last updated: 11/08/2026, 17:02:45
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4    int cnt0 = 0;
5    int cnt1 = 0;
6    int cnt2 = 0;
7    int n = nums.size();
8
9    for(int i = 0; i<n; i++){
10        if(nums[i] == 0) cnt0++;
11        else if(nums[i] == 1) cnt1++;
12        else cnt2++;
13    }
14
15    for(int i = 0; i<cnt0; i++){
16        nums[i] = 0;
17    }
18    for(int i = cnt0; i< cnt0 + cnt1; i++){
19        nums[i] = 1;
20    }
21    for(int i = cnt0 + cnt1; i<n; i++){
22        nums[i] = 2;
23    }
24
25  
26    }
27};