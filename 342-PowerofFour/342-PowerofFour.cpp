// Last updated: 03/05/2026, 23:57:25
1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4        long long result;
5       for(long long i = 1; i<= num; i++){
6          result = (long long) i* i;
7          if(result == num){
8            return true;
9          }
10       } 
11       return false;
12    }
13};