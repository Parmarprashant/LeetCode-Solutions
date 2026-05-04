// Last updated: 04/05/2026, 21:11:45
1class Solution {
2public:
3    int checkNum(int multi){
4        if(multi > 0) return 1;
5        else if(multi < 0) return -1;
6        else return 0;
7    }
8
9    int arraySign(vector<int>& nums) {
10        int multi = 1;
11
12        for(int i = 0; i < nums.size(); i++){
13            if(nums[i] == 0) return 0;
14            multi *= nums[i];
15            if(multi > 0) multi = 1;
16            else multi = -1;
17        }
18
19        return checkNum(multi);
20    }
21};