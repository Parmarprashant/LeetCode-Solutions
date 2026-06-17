// Last updated: 17/06/2026, 20:45:13
1class Solution {
2public:
3    double myPow(double x, int n) {
4        long long power = n;
5
6        if(power<0){
7            x = 1/x;
8            power = -power;
9        }
10
11        double ans = 1;
12
13        while(power>0){
14            if(power % 2 == 1){
15                ans *=x;
16            }
17
18            x *= x;
19            power /=2;
20        }
21        
22
23        return ans;
24    }
25
26};