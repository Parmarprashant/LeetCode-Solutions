// Last updated: 30/07/2026, 11:01:28
1class Solution {
2public:
3    bool divideArray(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        int count = 0;
6        for(int i = 0;  i<nums.size()-1; i +=2){
7            if(nums[i] == nums[i+1]){
8                count++;
9            }
10        }
11
12        int get = nums.size()/2;
13        if(get == count){
14            return true;
15
16        }
17        
18
19        return false;
20    }
21};