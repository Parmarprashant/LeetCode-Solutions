// Last updated: 04/05/2026, 21:25:08
1class Solution {
2public:
3    int averageValue(vector<int>& nums) {
4        int count = 0;
5        int sum = 0;
6        int avg = 0;
7
8        for(int i = 0; i < nums.size(); i++){
9            if(nums[i] % 2 == 0 && nums[i] % 3 == 0){
10                sum += nums[i];
11                count++;
12            }
13        }
14
15        if(count != 0){
16            avg = sum / count;
17        }
18
19        return avg;
20    }
21};