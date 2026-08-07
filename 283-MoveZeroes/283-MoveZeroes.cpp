// Last updated: 07/08/2026, 12:54:24
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        vector<int> temp;
5   
6        int n = nums.size();
7          for(int i : nums){
8            if(i != 0){
9                temp.push_back(i);
10                
11         }
12          }
13
14
15         int nonZ = temp.size();
16
17         for(int i = 0; i<temp.size(); i++){
18            nums[i] = temp[i];
19         }
20         
21
22         for(int i = nonZ; i<n; i++){
23            nums[i] = 0;
24         }
25
26
27    
28
29      }
30};