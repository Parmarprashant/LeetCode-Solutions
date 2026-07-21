// Last updated: 21/07/2026, 13:53:55
1class Solution {
2public:
3    int maxNonOverlapping(vector<int>& nums, int target) {
4        int ans = 0;
5        int sum = 0;
6
7        unordered_set<int> st;
8        st.insert(0);
9
10        for(int x : nums){
11            sum += x;
12
13            if(st.count(sum - target)){
14                ans++;
15                sum = 0;
16                st.clear();
17                st.insert(0);
18            }
19            else{
20                st.insert(sum);
21            }
22        }
23
24        return ans;
25    }
26};