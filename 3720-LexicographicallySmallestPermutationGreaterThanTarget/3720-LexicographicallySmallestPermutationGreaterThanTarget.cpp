// Last updated: 27/08/2026, 22:10:39
1class Solution {
2public:
3    string lexGreaterPermutation(string s, string target) {
4        vector<int> cnt(26);
5        for (char c : s) cnt[c - 'a']++;
6
7        string ans;
8
9        for (int i = 0; i < target.size(); i++) {
10            int x = target[i] - 'a';
11
12            if (cnt[x]) {
13                ans += target[i];
14                cnt[x]--;
15            } else {
16                int j = x + 1;
17
18                while (j < 26 && !cnt[j]) j++;
19
20                if (j < 26) {
21                    ans += char('a' + j);
22                    cnt[j]--;
23
24                    for (int k = 0; k < 26; k++)
25                        while (cnt[k]--)
26                            ans += char('a' + k);
27
28                    return ans;
29                }
30
31                while (!ans.empty()) {
32                    int prev = ans.back() - 'a';
33                    ans.pop_back();
34                    cnt[prev]++;
35
36                    j = prev + 1;
37                    while (j < 26 && !cnt[j]) j++;
38
39                    if (j < 26) {
40                        ans += char('a' + j);
41                        cnt[j]--;
42
43                        for (int k = 0; k < 26; k++)
44                            while (cnt[k]--)
45                                ans += char('a' + k);
46
47                        return ans;
48                    }
49                }
50
51                return "";
52            }
53        }
54
55        while (!ans.empty()) {
56            int prev = ans.back() - 'a';
57            ans.pop_back();
58            cnt[prev]++;
59
60            int j = prev + 1;
61            while (j < 26 && !cnt[j]) j++;
62
63            if (j < 26) {
64                ans += char('a' + j);
65                cnt[j]--;
66
67                for (int k = 0; k < 26; k++)
68                    while (cnt[k]--)
69                        ans += char('a' + k);
70
71                return ans;
72            }
73        }
74
75        return "";
76    }
77};