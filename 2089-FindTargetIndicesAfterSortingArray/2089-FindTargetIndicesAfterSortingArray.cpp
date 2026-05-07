// Last updated: 08/05/2026, 00:07:36
1class Solution {
2public:
3    int maximumCount(vector<int>& nums) {
4        int count1 = 0;
5        int count2 = 0;
6        for(long long i = 0; i<nums.size(); i++){
7            if(nums[i]>0){
8                count1++;
9            }
10            else if(nums[i]<0){
11                count2++;
12            }
13
14        }
15
16        if(count1>count2){
17            return count1;
18        }
19        
20
21        return count2;
22    }
23};