// Last updated: 16/07/2026, 13:53:49
1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        unordered_set<char> st;
5        
6        int left = 0;
7        int ans = 0;
8
9        for(int right = 0; right < s.length(); right++) {
10            
11            while(st.find(s[right]) != st.end()) {
12                st.erase(s[left]);
13                left++;
14            }
15
16            st.insert(s[right]);
17
18            ans = max(ans, right - left + 1);
19        }
20
21        return ans;
22    }
23};