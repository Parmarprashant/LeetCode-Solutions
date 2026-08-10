// Last updated: 10/08/2026, 08:28:45
1class Solution {
2public:
3    string countAndSay(int n) {
4
5        string ans = "1";
6
7        for (int i = 1; i < n; i++) {
8
9            string temp = "";
10
11            for (int j = 0; j < ans.size(); j++) {
12
13                int count = 1;
14
15                while (j + 1 < ans.size() && ans[j] == ans[j + 1]) {
16                    count++;
17                    j++;
18                }
19
20                temp += to_string(count);
21                temp += ans[j];
22            }
23
24            ans = temp;
25        }
26
27        return ans;
28    }
29};