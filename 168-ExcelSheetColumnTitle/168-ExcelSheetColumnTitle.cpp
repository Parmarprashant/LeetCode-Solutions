// Last updated: 27/07/2026, 09:02:25
1class Solution {
2public:
3    string convertToTitle(int columnNumber) {
4        string ans = "";
5
6        while (columnNumber > 0) {
7            columnNumber--;
8
9            ans = char('A' + columnNumber % 26) + ans;
10
11            columnNumber = columnNumber / 26;
12        }
13
14        return ans;
15    }
16};