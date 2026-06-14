// Last updated: 14/06/2026, 11:36:01
1class Solution {
2public:
3    int singleNumber(vector<int>& nums) {
4        for(int i = 0; i<nums.size(); i++){
5            int count = 0;
6            for(int j = 0; j<nums.size(); j++){
7                if(nums[i] == nums[j]){
8                    count++;
9                }
10            }
11
12            if(count == 1){
13                return nums[i];
14        
15            }
16
17            
18        }
19        return -1;
20
21    }
22};