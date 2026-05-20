// Last updated: 20/05/2026, 20:04:09
1class Solution {
2public:
3    bool detectCapitalUse(string word) {
4        int capitalCount = 0;
5
6        for(int i = 0; i < word.length(); i++) {
7            if(word[i] >= 'A' && word[i] <= 'Z') {
8                capitalCount++;
9            }
10        }
11
12        if(capitalCount == word.length()) return true; 
13        if(capitalCount == 0) return true; 
14        if(capitalCount == 1 && word[0] >= 'A' && word[0] <= 'Z')
15            return true; 
16
17        return false;
18    }
19};