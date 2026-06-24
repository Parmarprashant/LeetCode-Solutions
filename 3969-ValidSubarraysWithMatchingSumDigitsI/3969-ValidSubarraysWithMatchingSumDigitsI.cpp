// Last updated: 24/06/2026, 10:06:50
1class Solution {
2public:
3    int maxNumberOfBalloons(string text) {
4        vector<int> cnt(26, 0);
5
6        for(char c : text)
7            cnt[c - 'a']++;
8
9        return min({
10            cnt['b' - 'a'],
11            cnt['a' - 'a'],
12            cnt['l' - 'a'] / 2,
13            cnt['o' - 'a'] / 2,
14            cnt['n' - 'a']
15        });
16    }
17};