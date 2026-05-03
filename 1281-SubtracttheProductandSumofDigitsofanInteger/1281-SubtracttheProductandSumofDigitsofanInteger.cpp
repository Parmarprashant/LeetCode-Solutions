// Last updated: 03/05/2026, 19:32:58
1class Solution {
2public:
3    int countDigits(int num) {
4        int count = 0;
5        int original = num;
6        while(num>0){
7            int digi = num%10;
8            num = num/10;
9              if(original % digi == 0){
10                count++;
11            }
12        }
13      
14
15
16        return count;
17    }
18};