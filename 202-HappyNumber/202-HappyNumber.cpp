// Last updated: 05/05/2026, 18:49:16
1class Solution {
2public:
3    int Square(int n){
4        int sq = 0;
5        while(n>0){
6            int digi = n%10;
7            n = n/10;
8            sq += digi * digi;
9        }
10
11        return sq;
12    }
13    bool isHappy(int n) {
14     
15      while(n != 1 && n !=4){
16         n = Square(n);
17      } 
18
19      return n == 1;
20    }
21};