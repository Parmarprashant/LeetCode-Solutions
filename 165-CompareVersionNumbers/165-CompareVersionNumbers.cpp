// Last updated: 16/06/2026, 13:29:52
1class Solution {
2public:
3    int compareVersion(string version1, string version2) {
4
5        int i = 0, j = 0;
6
7        while (i < version1.size() || j < version2.size()) {
8
9            int pos1 = version1.find('.', i);
10            cout<<pos1<<endl;
11
12            int pos2 = version2.find('.', j);
13            cout<<pos2<<endl;
14
15            if (pos1 == string::npos) pos1 = version1.size();
16            if (pos2 == string::npos) pos2 = version2.size();
17
18            string s1;
19            if (i < version1.size()) {
20                s1 = version1.substr(i, pos1 - i);
21            } else {
22                s1 = "0";
23            }
24
25            string s2;
26            if (j < version2.size()) {
27                s2 = version2.substr(j, pos2 - j);
28            } else {
29                s2 = "0";
30            }
31
32            int num1;
33            if (s1.empty()) {
34                num1 = 0;
35            } else {
36                num1 = stoi(s1);
37            }
38
39            int num2;
40            if (s2.empty()) {
41                num2 = 0;
42            } else {
43                num2 = stoi(s2);
44            }
45
46            if (num1 < num2) {
47                return -1;
48            } else if (num1 > num2) {
49                return 1;
50            }
51
52            i = pos1 + 1;
53            j = pos2 + 1;
54        }
55
56        return 0;
57    }
58};