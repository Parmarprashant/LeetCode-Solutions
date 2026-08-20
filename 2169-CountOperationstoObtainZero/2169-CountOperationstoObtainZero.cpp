// Last updated: 20/08/2026, 10:50:51
1class Solution {
2public:
3    int countOperations(int num1, int num2) {
4        int count = 0;
5
6        while (num1 > 0 && num2 > 0) {
7            if (num1 > num2) {
8                num1 -= num2;
9            }
10            else {
11                num2 -= num1;
12            }
13
14            count++;
15        }
16
17        return count;
18    }
19};