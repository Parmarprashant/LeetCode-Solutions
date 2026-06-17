// Last updated: 17/06/2026, 21:12:28
1class Solution {
2public:
3    string greatestLetter(string s) {
4        string ans = "";
5
6        for(char c = 'Z'; c>= 'A'; c--){
7            bool upper = false;
8            bool lower = false;
9
10            for(char ch: s){
11                if(ch == c) upper = true;
12                if(ch == c + 32) lower = true;
13            }
14
15            if(upper && lower){
16                ans += c;
17                return ans;
18            }
19        }
20
21        return "";
22    }
23};