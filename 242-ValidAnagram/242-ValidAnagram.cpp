// Last updated: 03/05/2026, 23:21:48
1class Solution {
2public:
3    bool isPowerOfTwo(int n) {
4        int i = 2;
5        long long check = 2;
6        if(n == 1 || n == 2) return true;
7       while(n>0){
8        check = check *i;
9   
10        if(check == n){    
11            return true;
12        }
13        else if(check>n){
14            break;
15        }
16
17        
18       }
19        return false;
20    }
21};