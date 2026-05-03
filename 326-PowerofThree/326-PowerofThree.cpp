// Last updated: 03/05/2026, 23:35:23
1class Solution {
2public:
3    bool isPowerOfThree(int n) {
4        if(n == 3 || n == 1)return true;
5        int i = 3;
6        long long check = 3;
7        while(check<=n){
8            check = check * i;
9
10            if(check == n){
11                return true;
12            }
13            else if(check>n){
14                break;
15            }
16        }
17        return false;
18    }
19};