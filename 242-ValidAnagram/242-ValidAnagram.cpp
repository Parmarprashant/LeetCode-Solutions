// Last updated: 03/05/2026, 22:37:05
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        long long result = 0;
5        int original = x;
6        while(x>0){
7            int digi = x%10;
8            x = x/10;
9
10            result = result * 10 + digi;
11        }
12
13        if(result == original){
14            return true;
15        }
16        else{
17            return false;
18        }
19    }
20};