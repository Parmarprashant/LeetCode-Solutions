// Last updated: 09/08/2026, 15:57:24
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int maxi = 0;
5        int cn = 0;
6
7        for(int i =0; i<nums.size(); i++){
8            if(nums[i] == 1){
9                cn++;
10                maxi = max(cn,maxi);
11
12            }
13            else{
14                cn = 0;
15            }
16        }
17
18        return maxi;
19    }
20};