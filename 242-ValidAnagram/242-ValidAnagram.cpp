// Last updated: 03/05/2026, 23:04:12
1class Solution {
2public:
3    string reverseVowels(string s) {
4     int i =0;
5     int j = s.size()-1;
6     while(i<j){
7      if((s[i] == 'A' || s[i] == 'E'|| s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') && (s[j] == 'A' || s[j] == 'E'|| s[j] == 'I' || s[j] == 'O' || s[j] == 'U' || s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')){
8        swap(s[i], s[j]);
9        i++;
10        j--;
11      }
12      else if(!(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')){
13        i++;
14      }
15      else{
16        j--;
17      }
18     }
19
20     return s;
21
22    }
23};