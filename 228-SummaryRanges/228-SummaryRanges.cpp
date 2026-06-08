// Last updated: 08/06/2026, 09:50:04
1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        vector<string> ans;
5        if(nums.empty()) return ans;
6
7        int start = nums[0];
8
9        for(int i = 0; i < nums.size(); i++) {
10
11            
12            if(i == nums.size() - 1 || nums[i] + 1 != nums[i + 1]) {
13
14                if(start == nums[i]) 
15                    ans.push_back(to_string(nums[i]));
16                else 
17                    ans.push_back(to_string(start) + "->" + to_string(nums[i]));
18
19               
20                if(i + 1 < nums.size())
21                    start = nums[i + 1];
22            }
23        }
24
25        return ans;
26    }
27};