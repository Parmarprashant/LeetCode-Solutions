// Last updated: 14/06/2026, 11:46:47
1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        if(n<=0) return false;
5
6        while(n % 4 == 0){
7            n/=4;
8        }
9
10        return n==1;
11    }
12};