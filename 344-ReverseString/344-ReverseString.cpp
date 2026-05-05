// Last updated: 05/05/2026, 18:11:04
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4       
5       int i = 0;
6       int j = s.size()-1;
7
8       while(i<j){
9        swap(s[i], s[j]);
10        i++;
11        j--;
12       }
13
14    }
15};