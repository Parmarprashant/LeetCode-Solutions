// Last updated: 20/05/2026, 20:16:19
1class Solution {
2public:
3    bool isValid(string word) {
4        if(word.length() < 3) return false;
5
6        bool hasVowel = false;
7        bool hasConsonant = false;
8
9        for(int i = 0; i < word.length(); i++) {
10
11            
12            if((word[i] >= '0' && word[i] <= '9') ||
13               (word[i] >= 'a' && word[i] <= 'z') ||
14               (word[i] >= 'A' && word[i] <= 'Z')) {
15
16                char ch = tolower(word[i]);
17
18                
19                if(ch >= 'a' && ch <= 'z') {
20                    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
21                        hasVowel = true;
22                    else
23                        hasConsonant = true;
24                }
25            }
26            else {
27                return false;
28            }
29        }
30
31        return hasVowel && hasConsonant;
32    }
33};