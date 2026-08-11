// Last updated: 11/08/2026, 13:52:28
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& nums, int target) { 
4        map<int, int> mpp;
5        int n = nums.size();
6
7        for(int i = 0; i<n; i++){
8            int a = nums[i];
9            int more = target - a;
10            if(mpp.find(more) != mpp.end()){
11                return {mpp[more], i};
12            }
13
14            mpp[a] = i;
15
16        }
17
18        return {};
19    }
20};