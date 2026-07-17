// Last updated: 17/07/2026, 16:49:27
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4       int n = nums.size();
5       vector<int> ans(n,1);
6       vector<int> preffix(n,1); 
7       vector<int> suffix(n,1); 
8
9       for(int i = 1; i<n; i++){
10        preffix[i] = preffix[i-1] * nums[i-1];
11       }
12
13       for(int j = n-2; j>=0; j--){
14        suffix[j] = suffix[j+1] * nums[j+1];
15
16       }
17
18       for(int i = 0; i<n; i++){
19     ans[i] = preffix[i] * suffix[i];
20       }
21
22       return ans;
23    }
24
25};