// Last updated: 21/08/2026, 13:42:36
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        sort(intervals.begin(), intervals.end());
5        vector<vector<int>> ans;
6        for(auto interval:intervals){
7            if(ans.empty()||interval[0]>ans.back()[1]){
8                ans.push_back(interval);
9            }
10            else{
11                ans.back()[1] = max(ans.back()[1], interval[1]);
12            }
13        }
14
15        return ans;
16    }
17};