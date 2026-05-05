// Last updated: 05/05/2026, 18:27:23
1class Solution {
2public:
3    int sumBase(int n, int k) {
4     int result = 0;
5     int div;
6     while(n>0){
7        int digi = n%k;
8        div = n/k;
9        result = result + digi;
10        n = div;
11     }
12
13     return result;
14    }
15};