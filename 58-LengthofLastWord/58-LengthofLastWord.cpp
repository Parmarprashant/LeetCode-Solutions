// Last updated: 14/06/2026, 11:29:45
1class Solution {
2public:
3    int lengthOfLastWord(string s) {
4    vector<string> words;
5    string word = "";
6    for(char ch:s){
7        if(ch != ' '){
8            word +=ch;
9        }
10        else if(!word.empty()){
11            words.push_back(word);
12            word = "";
13        }
14    }
15
16    if(!word.empty()){
17        words.push_back(word);
18    }
19
20
21    return words.back().length();
22    }
23};