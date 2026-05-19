// Last updated: 19/05/2026, 19:48:23
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count = 0;
5        int max = 0;
6        for(int i = 0; i<nums.size(); i++){
7            if(nums[i] == 1){
8              count++;
9            }
10            else if(nums[i] == 0){
11                count = 0;
12                continue;
13            }
14            if(count>=max){
15                max = count;
16            }
17        }
18
19
20        return max;
21    }
22};