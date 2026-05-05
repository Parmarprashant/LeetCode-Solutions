// Last updated: 05/05/2026, 12:48:59
1class Solution {
2public:
3    string reversePrefix(string word, char ch) {
4        int index = 0;
5       for(int i = 0; i<word.size(); i++){
6             if(word[i] == ch){
7                index = i;
8                break;
9             } 
10       }
11
12       if(index == 0){
13        return word;
14       }
15
16       int left = 0;
17       int right = index;
18     while(left<right){
19        swap(word[left], word[right]);
20        left++;
21        right--;
22     }
23     return word;
24    }
25};