// Last updated: 05/05/2026, 12:25:10
1class Solution {
2public:
3    string reverseWords(string s) {
4    int start = 0;
5
6    for (int i = 0; i <= s.length(); i++) {
7        if (i == s.length() || s[i] == ' ') {
8            reverse(s.begin() + start, s.begin() + i);
9            start = i + 1;
10        }
11    }
12
13
14return s;
15        
16    }
17};