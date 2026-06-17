// Last updated: 17/06/2026, 21:40:08
1class Solution {
2public:
3    string reverseOnlyLetters(string s) {
4        int i = 0; 
5        int j = s.size()-1;
6
7        while(i<j){
8            if(!isalpha(s[i])) i++;
9            else if(!isalpha(s[j])) j--;
10            else swap(s[i++], s[j--]);
11        }
12
13
14        return s;
15    }
16};