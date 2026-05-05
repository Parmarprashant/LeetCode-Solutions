// Last updated: 05/05/2026, 18:57:23
1class Solution {
2public:
3    bool isPalindrome(int x) {
4     long long result = 0;
5     int original = x;
6     if(x == 0) return true;
7     while(x>0){
8        int digi = x%10; //reminder 
9        x = x/10; // this modifies the input x
10        result = result *10 + digi;
11
12    if(original == result){
13        return true;
14    }
15
16     }
17     return false;
18
19    }
20};