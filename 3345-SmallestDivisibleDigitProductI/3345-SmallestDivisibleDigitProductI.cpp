// Last updated: 06/08/2026, 13:24:41
1class Solution {
2public:
3    int digitProduct(int n){
4        int product = 1;
5
6        while(n > 0){
7            product *= (n % 10);
8            n /= 10;
9        }
10
11        return product;
12    }
13
14    int smallestNumber(int n, int t) {
15
16        while(true){
17            if(digitProduct(n) % t == 0)
18                return n;
19
20            n++;
21        }
22    }
23};