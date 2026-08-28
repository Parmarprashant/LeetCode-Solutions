// Last updated: 28/08/2026, 10:56:07
1class Solution {
2public:
3    string lexPalindromicPermutation(string s, string target) {
4        vector<int> cnt(26);
5        for (const auto& x : s) {
6            ++cnt[x - 'a'];
7        }
8        int c = 0;
9        for (int i = 0; i < size(cnt); ++i) {
10            c += cnt[i] % 2;
11        }
12        if (c > 1) {
13            return "";
14        }
15        int x = -1;
16        if (size(s) % 2) {
17            for (int i = 0; i < size(cnt); ++i) {
18                if (cnt[i] % 2) {
19                    x = i;
20                    --cnt[i];
21                    break;
22                }
23            }
24        }
25        string result;
26        int i = 0;
27        for (; i < size(target) / 2; ++i) {
28            cnt[target[i] - 'a'] -= 2;
29            result.push_back(target[i]);
30            if (cnt[target[i] - 'a'] < 0) {
31                break;
32            }
33        }
34        if (i == size(target) / 2) {
35            if (size(target) % 2) {
36                result.push_back('a' + x);
37            }
38            string ret(result);
39            copy(crbegin(result) + (size(target) % 2), crend(result), std::back_inserter(ret));
40            if (ret > target) {
41                return ret;
42            }
43            if (size(target) % 2) {
44                result.pop_back();
45            }
46        }
47        while (!empty(result)) {
48            const auto& c = result.back() - 'a';
49            result.pop_back();
50            cnt[c] += 2;
51            for (int i = c + 1; i < size(cnt); ++i) {
52                if (!cnt[i]) {
53                    continue;
54                }
55                cnt[i] -= 2;
56                result.push_back('a' + i);
57                for (int j = 0; j < size(cnt); ++j) {
58                    if (!cnt[j]) {
59                        continue;
60                    }
61                    while (cnt[j]) {
62                        cnt[j] -= 2;
63                        result.push_back('a' + j);
64                    }
65                }
66                if (size(target) % 2) {
67                    result.push_back('a' + x);
68                }
69                string ret(result);
70                copy(crbegin(result) + (size(target) % 2), crend(result), std::back_inserter(ret));
71                return ret;
72            }
73        }
74        return "";
75    }
76};