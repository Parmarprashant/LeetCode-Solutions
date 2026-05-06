// Last updated: 06/05/2026, 23:46:03
1class Solution {
2public:
3    int mySqrt(int x) {
4        int start = 0;
5        int end = x;
6        int ans = 0;
7
8        while(start <= end){
9            int mid = start + (end - start) / 2;
10
11            long long square = (long long)mid * mid;
12
13            if(square == x){
14                return mid;
15            }
16            else if(square < x){
17                ans = mid;        
18                start = mid + 1;
19            }
20            else{
21                end = mid - 1;
22            }
23        }
24
25        return ans;
26    }
27};