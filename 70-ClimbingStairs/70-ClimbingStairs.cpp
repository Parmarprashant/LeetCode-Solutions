// Last updated: 22/06/2026, 21:02:28
1class Solution {
2public:
3
4    int climbStairs(int n) {
5        if(n<=2) return n;
6
7        int a = 1, b = 2;
8
9
10        for(int i = 3; i<=n; i++){
11            int c = a+b;
12            a=b;
13            b=c;
14        }
15
16
17        return b;
18    }
19};