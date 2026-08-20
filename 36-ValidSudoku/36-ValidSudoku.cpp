// Last updated: 20/08/2026, 13:53:19
1class Solution {
2public:
3    bool isValidSudoku(vector<vector<char>>& board) {
4
5        
6        for(int i = 0; i < 9; i++) {
7            map<char, int> mp;
8
9            for(int j = 0; j < 9; j++) {
10                if(board[i][j] == '.') continue;
11
12                mp[board[i][j]]++;
13
14                if(mp[board[i][j]] > 1)
15                    return false;
16            }
17        }
18
19      
20        for(int j = 0; j < 9; j++) {
21            map<char, int> mp;
22
23            for(int i = 0; i < 9; i++) {
24                if(board[i][j] == '.') continue;
25
26                mp[board[i][j]]++;
27
28                if(mp[board[i][j]] > 1)
29                    return false;
30            }
31        }
32
33       
34        for(int r = 0; r < 9; r += 3) {
35            for(int c = 0; c < 9; c += 3) {
36
37                map<char, int> mp;
38
39                for(int i = r; i < r + 3; i++) {
40                    for(int j = c; j < c + 3; j++) {
41
42                        if(board[i][j] == '.') continue;
43
44                        mp[board[i][j]]++;
45
46                        if(mp[board[i][j]] > 1)
47                            return false;
48                    }
49                }
50            }
51        }
52
53        return true;
54    }
55};