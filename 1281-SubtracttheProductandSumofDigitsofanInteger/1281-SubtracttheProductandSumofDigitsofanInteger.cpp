// Last updated: 03/05/2026, 19:10:04
1class Solution {
2public:
3     int subtractProductAndSum(int n) {
4     int multi = 1;
5     int sum = 0;
6     
7     while(n>0){
8       int digi = n%10;
9       n = n/10;
10       multi = multi*digi;
11       sum = sum + digi;
12     }
13
14     int result = multi - sum;
15
16      return result;
17    }
18};