// Last updated: 30/07/2026, 23:15:55
1class Solution {
2public:
3    int mostFrequentEven(vector<int>& nums) {
4
5        unordered_map<int,int> freq;
6
7        for(int x : nums){
8            if(x % 2 == 0)
9                freq[x]++;
10        }
11
12        int ans = -1;
13        int maxFreq = 0;
14
15        for(auto it : freq){
16            int num = it.first;
17            int count = it.second;
18
19            if(count > maxFreq){
20                maxFreq = count;
21                ans = num;
22            }
23            else if(count == maxFreq && num < ans){
24                ans = num;
25            }
26        }
27
28        return ans;
29    }
30};