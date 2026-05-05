// Last updated: 05/05/2026, 19:29:05
1class Solution {
2public:
3    int countDigits(int num) {
4       int original = num;
5       int count = 0;
6       while(num>0){
7        int digi = num%10;
8        num = num/10;
9        if(original % digi == 0){
10            count++;
11        }
12       } 
13
14       return count;
15    }
16};