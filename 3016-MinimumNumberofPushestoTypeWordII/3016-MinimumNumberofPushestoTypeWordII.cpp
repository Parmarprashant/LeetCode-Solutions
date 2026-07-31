// Last updated: 31/07/2026, 14:25:29
1class Solution {
2public:
3    int minimumPushes(string word) {
4        vector<int> freq(26, 0);
5
6        for(char c : word)
7            freq[c - 'a']++;
8
9        sort(freq.begin(), freq.end(), greater<int>());
10
11        int ans = 0;
12
13        for(int i = 0; i < 26; i++) {
14            if(freq[i] == 0) break;
15
16            ans += freq[i] * (i / 8 + 1);
17        }
18
19        return ans;
20    }
21};