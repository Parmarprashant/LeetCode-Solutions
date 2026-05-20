// Last updated: 20/05/2026, 18:10:42
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4          int max =0;
5          int count = 0;
6          for(int i = 0; i<nums.size(); i++){
7            if(nums[i] == 1){
8                count++;
9            }
10            else if(nums[i] == 0){
11                count = 0;
12                continue;
13            }
14
15
16            if(count>=max){
17                max = count;
18            }
19          }
20
21
22          return max;
23    }
24};