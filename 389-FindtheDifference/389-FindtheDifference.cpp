// Last updated: 03/06/2026, 11:35:39
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4        for(int i = 0; i < t.size(); i++) {
5            int count = 0;
6
7            for(int j = 0; j < s.size(); j++) {
8                if(t[i] == s[j]) {
9                    count++;
10                    s[j] = '#';  
11                    break;
12                }
13            }
14
15            if(count == 0) return t[i];
16        }
17
18        return 0; 
19    }
20};