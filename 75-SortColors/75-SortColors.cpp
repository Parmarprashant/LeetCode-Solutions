// Last updated: 11/08/2026, 22:38:32
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4      map<int, int> mp;
5      int n = nums.size();
6      for(int i = 0; i<n; i++){
7        mp[nums[i]]++;
8      }
9
10      for(auto it: mp){
11        if(it.second>n/2){
12            return it.first;
13        }
14      }
15
16      return -1;
17    }
18};