// Last updated: 07/06/2026, 18:00:47
1class Solution {
2public:
3    int firstUniqChar(string s) {
4        unordered_map<char , int> charFreq;
5
6
7        for(char c: s){
8            charFreq[c]++;
9        }
10
11        for(int i = 0; i<s.size(); i++){
12            if(charFreq[s[i]] == 1){
13                return i;
14            }
15        }
16
17
18        return -1;
19    }
20};