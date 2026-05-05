// Last updated: 05/05/2026, 13:38:29
1class Solution {
2public:
3    bool isPrefixString(string s, vector<string>& words) {
4        string temp = "";
5
6        for (int i = 0; i < words.size(); i++) {
7            temp += words[i];
8
9            if (temp == s) return true;
10
11            
12            if (temp.length() > s.length()) return false;
13        }
14
15        return false;
16    }
17};