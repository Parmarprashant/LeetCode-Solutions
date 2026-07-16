// Last updated: 16/07/2026, 23:35:52
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n = nums.size();
5         vector<int> ans(n,1);
6        vector<int> prefix(n,1);
7        vector<int> suffix(n,1);
8
9        for(int i =1; i<n; i++){
10            prefix[i] = prefix[i-1] * nums[i -1];
11        }
12
13        for(int i = n-2; i>=0; i--){
14            suffix[i] = suffix[i+1] * nums[i+1];
15        }
16
17
18        for(int i = 0; i<n; i++){
19            ans[i] = prefix[i] * suffix[i];
20        }
21
22
23        return ans;
24
25
26    }
27};