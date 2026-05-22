// Last updated: 22/05/2026, 18:27:01
1class Solution {
2public:
3    int findNumbers(vector<int>& nums) {
4        int count = 0;
5
6        for(int num : nums) {
7            int digits = 0;
8
9            while(num > 0) {
10                digits++;
11                num /= 10;
12            }
13
14            if(digits % 2 == 0) {
15                count++;
16            }
17        }
18
19        return count;
20    }
21};