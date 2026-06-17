// Last updated: 17/06/2026, 10:57:41
1class Solution {
2public:
3    string processStr(string s) {
4        string result;
5
6
7        for(int i = 0; i<s.length(); i++){
8           if(s[i] == '*'){
9            if(!result.empty()){
10            result.pop_back();
11            }
12           }
13           else if(s[i] == '#'){
14            result += result;
15           }
16           else if(s[i] == '%'){
17            reverse(result.begin(), result.end());
18           }
19           else{
20
21            result += s[i];
22           }
23        }
24
25
26        return result;
27        
28    }
29};