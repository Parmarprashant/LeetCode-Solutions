// Last updated: 06/06/2026, 11:51:48
1class Solution {
2public:
3    int reverse(int x) {
4       long long rev = 0;
5       while(x){
6        rev = rev * 10+ x%10;
7        x /= 10;
8       } 
9
10       return (rev>INT_MAX || rev<INT_MIN)? 0 : rev;
11    }
12};