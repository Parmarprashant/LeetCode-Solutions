// Last updated: 11/08/2026, 22:23:07
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4       int n = nums.size();
5
6       for(int i = 0; i<nums.size(); i++){
7          int count = 0;
8          for(int j = 0; j<nums.size(); j++){
9            if(nums[i] == nums[j]){
10                count++;
11            }
12          }
13          if(count>n/2){
14            return nums[i];
15          }
16       }
17       return -1;
18    }
19};