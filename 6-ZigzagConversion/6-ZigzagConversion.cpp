// Last updated: 15/08/2026, 18:19:49
1class Solution {
2public:
3    string convert(string s, int numRows) {
4        if (numRows == 1 || numRows >= s.size())
5            return s;
6
7        vector<string> rows(numRows);
8
9        int row = 0;
10        int direction = 1;
11
12        for (char c : s) {
13            rows[row] += c;
14
15            if (row == 0)
16                direction = 1;
17            else if (row == numRows - 1)
18                direction = -1;
19
20            row += direction;
21        }
22
23        string ans;
24
25        for (string &r : rows)
26            ans += r;
27
28        return ans;
29    }
30};