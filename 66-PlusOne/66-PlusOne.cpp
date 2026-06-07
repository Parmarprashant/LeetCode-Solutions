// Last updated: 07/06/2026, 17:22:48
1class Solution {
2public:
3    vector<int> plusOne(vector<int>& digits) {
4      for(int i = digits.size()-1 ; i>=0; i--){
5        if(digits[i]<9){
6            digits[i]++;
7            return digits;
8        }
9
10
11        digits[i] = 0;
12      }
13
14    digits.insert(digits.begin(), 1);
15
16    return digits;
17
18    }
19};