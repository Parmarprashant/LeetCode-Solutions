// Last updated: 05/05/2026, 18:13:16
1class Solution {
2public:
3    bool checkPerfectNumber(int num) {
4        int sum = 0;
5        for(int i = 1; i<num; i++){
6            if(num%i==0){
7                sum += i;
8            }
9        }
10
11        if(sum == num){
12            return true;
13        }
14
15        return false;
16    }
17};