// Last updated: 17/06/2026, 11:14:24
1class Solution {
2public:
3    int balancedStringSplit(string s) {
4        int balance = 0;
5        int count = 0;
6
7        for(char ch : s) {
8            if(ch == 'L')
9                balance++;
10            else
11                balance--;
12
13            if(balance == 0)
14                count++;
15        }
16
17        return count;
18    }
19};