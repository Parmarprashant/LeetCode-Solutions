// Last updated: 07/05/2026, 23:57:03
1class Solution {
2public:
3    vector<int> targetIndices(vector<int>& nums, int target) {
4
5        sort(nums.begin(), nums.end());
6
7        vector<int> ans;
8
9        for(int i = 0; i < nums.size(); i++){
10            if(nums[i] == target){
11                ans.push_back(i);
12            }
13        }
14
15        return ans;
16    }
17};