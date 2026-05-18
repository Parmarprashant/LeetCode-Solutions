// Last updated: 18/05/2026, 13:01:15
1class Solution {
2public:
3    bool isBalanced(string num) {
4        int evenSum = 0;
5        int oddSum = 0;
6
7        for(int i = 0; i < num.length(); i++) {
8            int digit = num[i] - '0';
9
10            if(i % 2 == 0) {
11                evenSum += digit;
12            }
13            else {
14                oddSum += digit;
15            }
16        }
17
18        return evenSum == oddSum;
19    }
20};