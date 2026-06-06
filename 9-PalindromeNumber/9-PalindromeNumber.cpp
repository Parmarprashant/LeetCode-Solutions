// Last updated: 06/06/2026, 11:58:45
1class Solution {
2public:
3    bool isPalindrome(int x) {
4       int original = x;
5       long long check = 0;
6       while(x>0){
7        int digi = x % 10;
8        x = x/10;
9       check = check * 10 + digi;
10       } 
11
12
13       return check == original;
14    }
15};