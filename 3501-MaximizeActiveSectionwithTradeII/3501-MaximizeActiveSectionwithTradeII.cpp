// Last updated: 22/07/2026, 18:36:52
1#include <vector>
2#include <string>
3#include <algorithm>
4#include <cmath>
5
6using namespace std;
7
8struct Group {
9    int start;
10    int length;
11};
12
13class SparseTable {
14private:
15    int n;
16    vector<vector<int>> st;
17    vector<int> lg;
18
19public:
20    SparseTable() : n(0) {}
21    SparseTable(const vector<int>& nums) {
22        n = nums.size();
23        if (n == 0) return;
24        lg.assign(n + 1, 0);
25        for (int i = 2; i <= n; ++i) lg[i] = lg[i / 2] + 1;
26        int k = lg[n] + 1;
27        st.assign(k, vector<int>(n));
28        for (int i = 0; i < n; ++i) st[0][i] = nums[i];
29        for (int j = 1; j < k; ++j) {
30            for (int i = 0; i + (1 << j) <= n; ++i) {
31                st[j][i] = max(st[j - 1][i], st[j - 1][i + (1 << (j - 1))]);
32            }
33        }
34    }
35
36    int query(int l, int r) const {
37        if (l > r || n == 0) return 0;
38        int j = lg[r - l + 1];
39        return max(st[j][l], st[j][r - (1 << j) + 1]);
40    }
41};
42
43class Solution {
44public:
45    vector<int> maxActiveSectionsAfterTrade(string s, vector<vector<int>>& queries) {
46        const int n = s.length();
47        int ones = 0;
48        for (char c : s) {
49            if (c == '1') ones++;
50        }
51
52        auto [zeroGroups, zeroGroupIndex] = getZeroGroups(s);
53
54        if (zeroGroups.empty()) {
55            return vector<int>(queries.size(), ones);
56        }
57
58        vector<int> zeroMergeLengths;
59        for (size_t i = 0; i + 1 < zeroGroups.size(); ++i) {
60            zeroMergeLengths.push_back(zeroGroups[i].length + zeroGroups[i + 1].length);
61        }
62
63        const SparseTable st(zeroMergeLengths);
64
65        vector<int> ans;
66        ans.reserve(queries.size());
67
68        for (const auto& query : queries) {
69            const int l = query[0];
70            const int r = query[1];
71
72            // Truncated lengths of 0-groups at query boundaries
73            const int left = (zeroGroupIndex[l] == -1) ? -1 : 
74                (zeroGroups[zeroGroupIndex[l]].length - (l - zeroGroups[zeroGroupIndex[l]].start));
75            const int right = (zeroGroupIndex[r] == -1) ? -1 : 
76                (r - zeroGroups[zeroGroupIndex[r]].start + 1);
77
78            int startAdjacentGroupIndex = zeroGroupIndex[l] + 1;
79            int endAdjacentGroupIndex = (s[r] == '1') ? zeroGroupIndex[r] - 1 : zeroGroupIndex[r] - 2;
80
81            int activeSections = ones;
82
83            // Case 1: l and r are in adjacent 0-groups
84            if (s[l] == '0' && s[r] == '0' && zeroGroupIndex[l] + 1 == zeroGroupIndex[r]) {
85                activeSections = max(activeSections, ones + left + right);
86            } 
87            // Case 2: Range contains fully enclosed adjacent 0-groups
88            else if (startAdjacentGroupIndex <= endAdjacentGroupIndex) {
89                activeSections = max(activeSections, ones + st.query(startAdjacentGroupIndex, endAdjacentGroupIndex));
90            }
91
92            // Case 3: Truncated left 0-group + next full 0-group
93            int rightBoundaryIndex = (s[r] == '1') ? zeroGroupIndex[r] : zeroGroupIndex[r] - 1;
94            if (s[l] == '0' && zeroGroupIndex[l] + 1 <= rightBoundaryIndex) {
95                activeSections = max(activeSections, ones + left + zeroGroups[zeroGroupIndex[l] + 1].length);
96            }
97
98            // Case 4: Truncated right 0-group + previous full 0-group
99            if (s[r] == '0' && zeroGroupIndex[l] < zeroGroupIndex[r] - 1) {
100                activeSections = max(activeSections, ones + right + zeroGroups[zeroGroupIndex[r] - 1].length);
101            }
102
103            ans.push_back(activeSections);
104        }
105
106        return ans;
107    }
108
109private:
110    pair<vector<Group>, vector<int>> getZeroGroups(const string& s) {
111        vector<Group> zeroGroups;
112        vector<int> zeroGroupIndex;
113
114        for (int i = 0; i < (int)s.length(); ++i) {
115            if (s[i] == '0') {
116                if (i > 0 && s[i - 1] == '0') {
117                    zeroGroups.back().length++;
118                } else {
119                    zeroGroups.push_back({i, 1});
120                }
121            }
122            // Record the current/most-recent 0-group index for every character
123            zeroGroupIndex.push_back((int)zeroGroups.size() - 1);
124        }
125        return {zeroGroups, zeroGroupIndex};
126    }
127};