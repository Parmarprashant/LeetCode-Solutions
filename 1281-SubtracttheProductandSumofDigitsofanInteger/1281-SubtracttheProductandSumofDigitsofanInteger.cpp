// Last updated: 05/05/2026, 19:18:29
1class Solution {
2public:
3     int subtractProductAndSum(int n) {
4      int sum = 0;
5      int multi = 1;
6      int result;
7      while(n>0){
8        int digi = n%10;
9        n = n/10;
10        sum = sum + digi;
11        multi = multi * digi;
12        result = multi - sum;
13      }
14
15      return result;
16    }
17};