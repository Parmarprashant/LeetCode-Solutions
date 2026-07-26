// Last updated: 26/07/2026, 13:15:37
1class Solution {
2public:
3    bool canConstruct(string ransomNote, string magazine) {
4
5        for(int i = 0; i < ransomNote.size(); i++) {
6            bool found = false;
7
8            for(int j = 0; j < magazine.size(); j++) {
9                if(ransomNote[i] == magazine[j]) {
10                    magazine[j] = '#';
11                    found = true;
12                    break;
13                }
14            }
15
16            if(found == false) {
17                return false;
18            }
19        }
20
21        return true;
22    }
23};