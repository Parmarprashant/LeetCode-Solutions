// Last updated: 03/05/2026, 23:45:15
1class Solution {
2public:
3    bool isPowerOfFour(int n) {
4        if(n ==4 || n == 1) return true;
5        int i = 4;
6        long long check = 4;
7        while(check<=n){
8            check = check * i;
9            if(check == n){
10                return true;
11            }
12            else if(check>n){
13                break;
14            }
15        }
16
17        return false;
18    }
19};