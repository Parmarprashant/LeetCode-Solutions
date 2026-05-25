// Last updated: 25/05/2026, 22:42:13
1class Solution {
2public:
3    string greatestLetter(string s) {
4        for(char c = 'Z'; c >= 'A'; c--) {
5            bool big = false, small = false;
6
7            for(char x : s) {
8                if(x == c)
9                    big = true;
10
11                if(x == c + 32)
12                    small = true;
13            }
14
15            if(big && small)
16                return string(1, c);
17        }
18
19        return "";
20    }
21};