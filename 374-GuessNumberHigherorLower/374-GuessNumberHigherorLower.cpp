// Last updated: 17/06/2026, 21:07:04
1class Solution {
2public:
3    string toLowerCase(string s) {
4       for(int i = 0; i<s.size(); i++){
5        if(s[i]>='A' && s[i]<='Z'){
6            s[i] = s[i] + 32;
7        }
8       
9       } 
10        return s;
11    }
12};