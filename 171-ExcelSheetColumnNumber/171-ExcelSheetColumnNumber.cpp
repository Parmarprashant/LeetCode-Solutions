// Last updated: 16/07/2026, 21:53:09
1class Solution {
2public:
3    int titleToNumber(string columnTitle) {
4         int res = 0;
5         for(int i = 0; i<columnTitle.length(); i++){
6            res *=26;
7            res +=(columnTitle[i] - 'A' + 1);
8         }
9
10
11         return res;
12    }
13};