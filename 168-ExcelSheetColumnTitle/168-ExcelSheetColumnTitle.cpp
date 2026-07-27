// Last updated: 27/07/2026, 10:42:23
1class Solution {
2public:
3    bool wordPattern(string pattern, string s) {
4        
5        vector<string> words;
6        string store = "";
7
8   
9        for(int i = 0; i < s.length(); i++) {
10            if(s[i] != ' ') {
11                store += s[i];
12            }
13            else {
14                words.push_back(store);
15                store = "";
16            }
17        }
18
19        words.push_back(store); 
20
21
22        if(pattern.length() != words.size())
23            return false;
24
25
26        unordered_map<char, string> mp1;
27        unordered_map<string, char> mp2;
28
29
30       
31        for(int i = 0; i < pattern.length(); i++) {
32
33            char ch = pattern[i];
34            string word = words[i];
35
36
37           
38            if(mp1.find(ch) != mp1.end()) {
39                if(mp1[ch] != word)
40                    return false;
41            }
42            else {
43                mp1[ch] = word;
44            }
45
46
47            
48            if(mp2.find(word) != mp2.end()) {
49                if(mp2[word] != ch)
50                    return false;
51            }
52            else {
53                mp2[word] = ch;
54            }
55        }
56
57
58        return true;
59    }
60};