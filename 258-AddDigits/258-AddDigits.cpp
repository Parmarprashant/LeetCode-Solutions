// Last updated: 14/06/2026, 11:42:57
1class Solution {
2public:
3    int addDigits(int num) {
4        while(num>=10){
5            int sum = 0;
6            while(num>0){
7                sum += num%10;
8                num /= 10;
9            }
10
11            num = sum;
12        }
13
14        return num;
15    }
16};