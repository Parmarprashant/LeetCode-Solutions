// Last updated: 04/06/2026, 11:04:44
1class Solution {
2public:
3    string decode(string &s, int &i) {
4        string result = "";
5        int num = 0;
6
7        while(i < s.size()) {
8            char c = s[i];
9
10            if(isdigit(c)) {
11                num = num * 10 + (c - '0');
12            }
13            else if(c == '[') {
14                i++; 
15                string temp = decode(s, i);
16
17                while(num--) {
18                    result += temp;
19                }
20                num = 0;
21            }
22            else if(c == ']') {
23                return result; 
24            }
25            else {
26                result += c;
27            }
28
29            i++;
30        }
31
32        return result;
33    }
34
35    string decodeString(string s) {
36        int i = 0;
37        return decode(s, i);
38    }
39};