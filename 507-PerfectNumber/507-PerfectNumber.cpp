// Last updated: 05/05/2026, 18:18:49
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4     int i = 2;
5     long long check = 2;
6     if(n==1 || n == 2) return true;
7     
8     while(check<=n){
9        check = check *i;
10
11        if(check == n){
12            return true;
13        }
14        else if(check>n){
15            return false;
16        }
17
18     }
19     return false;
20    }
21};