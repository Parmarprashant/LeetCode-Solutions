// Last updated: 04/05/2026, 20:26:42
1class Solution {
2public:
3   int reverseNum(int num){
4    int reverse = 0;
5    while(num>0){
6        int digi = num %10;
7        num = num/10;
8        reverse = reverse*10 + digi;
9    }
10
11    return reverse;
12   }
13    bool sumOfNumberAndReverse(int num) {
14        for(int i = 0; i<=num; i++){
15            if(i + reverseNum(i) == num ){
16                return true;
17            }
18        }
19
20        return false;
21    }
22};