// Last updated: 30/07/2026, 13:18:08
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        string s = "";
5        int count = 1;
6
7        for (int i = 0; i < chars.size(); i++) {
8            s += chars[i];
9        }
10
11        string res = "";
12
13        for (int i = 0; i < s.length(); i++) {
14            if (i + 1 < s.length() && s[i] == s[i + 1]) {
15                count++;
16            } else {
17                res += s[i];
18
19                if (count > 1) {          
20                    res += to_string(count);
21                }
22
23                count = 1;
24            }
25        }
26
27
28      chars.clear();
29      for(int x: res){
30        chars.push_back(x);
31      }
32
33        return res.length();
34    }
35};