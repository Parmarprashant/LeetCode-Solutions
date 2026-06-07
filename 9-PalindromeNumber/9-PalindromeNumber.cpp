// Last updated: 07/06/2026, 13:54:52
1class Solution {
2public:
3    bool isPalindrome(int x) {
4     if(x<0) return false;
5     int orginal = x;
6     long long check = 0;
7
8     while(x>0){
9        int div = x%10;
10        x = x/10;
11        check = check *10 + div;
12     }
13
14     if(check == orginal){
15        return true;
16     }
17     else{
18        return false;
19     }
20    }
21};