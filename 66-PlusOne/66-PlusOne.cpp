// Last updated: 07/06/2026, 15:01:28
1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4      for(int i = digits.size()-1; i>=0; i--){
5        if(digits[i]<9){
6            digits[i]++;
7            return digits;
8        }
9
10        digits[i] = 0;
11      }
12
13      digits.insert(digits.begin(), 1);
14
15      return digits;
16    }
17};