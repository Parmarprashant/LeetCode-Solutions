// Last updated: 16/06/2026, 14:20:23
1class Solution {
2public:
3    string simplifyPath(string path) {
4        vector<string> st;
5        string curr;
6
7        for (int i = 0; i <= path.size(); i++) {
8            if (i == path.size() || path[i] == '/') {
9
10                if (curr == "..") {
11                    if (!st.empty())
12                        st.pop_back();
13                }
14                else if (!curr.empty() && curr != ".") {
15                    st.push_back(curr);
16                }
17
18                curr.clear();
19            }
20            else {
21                curr += path[i];
22            }
23        }
24
25        string ans;
26
27        for (string dir : st) {
28            ans += "/" + dir;
29        }
30
31        return ans.empty() ? "/" : ans;
32    }
33};