// Last updated: 07/06/2026, 18:12:43
1class Solution {
2public:
3    int hammingWeight(int n) {
4        int count = 0;
5        while(n != 0){
6            if(n&1){
7                count++;
8            }
9
10            n = n>>1;
11        }
12
13        return count;
14    }
15};