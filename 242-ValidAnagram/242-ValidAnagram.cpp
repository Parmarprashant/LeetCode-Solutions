// Last updated: 07/06/2026, 14:36:29
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4      sort(t.begin(), t.end());
5      sort(s.begin(), s.end());
6
7      return s == t;
8    }
9};