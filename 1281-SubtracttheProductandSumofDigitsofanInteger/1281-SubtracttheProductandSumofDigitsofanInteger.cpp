// Last updated: 03/05/2026, 20:31:26
1class Solution {
2public:
3    int sumBase(int n, int k) {
4        int result = 0;
5
6        while(n > 0){
7            int reminder = n % k;   
8            int div = n / k;        
9
10            result += reminder;     
11            n = div;                
12        }
13
14        return result;
15    }
16};