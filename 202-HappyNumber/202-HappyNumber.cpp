// Last updated: 25/05/2026, 20:59:58
1class Solution {
2public:
3    int square(int n){
4        int sq = 0;
5        while(n>0){
6            int digi = n%10;
7            sq +=digi * digi;
8            n = n/10;
9            
10        }
11
12        return sq;
13    }
14    bool isHappy(int n) {
15        while(n !=1 && n!=4){
16            n = square(n);
17        }
18        return n == 1;
19    }
20};