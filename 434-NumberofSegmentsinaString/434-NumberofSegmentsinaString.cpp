// Last updated: 27/07/2026, 17:11:59
1class Solution {
2public:
3    int countSegments(string s) {
4        int count = 0;
5
6        for(int i = 0; i < s.length(); i++) {
7            if(s[i] != ' ' && (i == 0 || s[i-1] == ' ')) {
8                count++;
9            }
10        }
11
12        return count;
13    }
14};