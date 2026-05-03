// Last updated: 03/05/2026, 22:33:18
1class Solution {
2public:
3    int Square(int n){
4        int square = 0;
5        while(n > 0){
6            int digi = n % 10;
7            n = n / 10;
8            square += digi * digi;
9        }
10        return square;
11    }
12
13    bool isHappy(int n) {
14     while(n != 1 && n != 4){
15    n = Square(n);
16}
17return n == 1;
18
19    }
20};