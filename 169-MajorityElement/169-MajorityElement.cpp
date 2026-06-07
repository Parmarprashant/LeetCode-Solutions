// Last updated: 07/06/2026, 18:05:42
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        unordered_map<int , int> ans;
5
6        for(int value:nums){
7            ans[value]++;
8        }
9
10        int freq = nums.size()/2;
11
12        for(auto it: ans){
13            if(it.second> freq){
14                return it.first;
15            }
16        }
17
18        return -1;
19    }
20};