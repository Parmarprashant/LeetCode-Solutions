// Last updated: 03/05/2026, 19:51:32
1class Solution {
2public:
3    int reverseNum(int num) {
4        int reverse = 0;
5
6        while(num > 0){
7            int digit = num % 10;
8            reverse = reverse * 10 + digit;
9            num /= 10;
10        }
11
12        return reverse;
13    }
14
15    bool isSameAfterReversals(int num) {
16        int first = reverseNum(num);
17        int second = reverseNum(first);
18
19        return second == num;
20    }
21};