// Last updated: 29/07/2026, 23:46:27
1class Solution {
2public:
3    int heightChecker(vector<int>& heights) {
4      vector<int> s = heights;   
5      sort(s.begin(), s.end());
6      int count = 0;
7
8        for(int i = 0; i<heights.size(); i++){
9            if(heights[i] != s[i]){
10                count++;
11            }
12        }
13
14        return count;
15    }
16};