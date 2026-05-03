// Last updated: 03/05/2026, 20:37:13
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        sort(s.begin(), s.end());
5        sort(t.begin(), t.end());
6        return (s == t) ? true : false;
7    }
8};