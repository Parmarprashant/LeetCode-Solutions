// Last updated: 17/06/2026, 11:42:14
1class Solution {
2public:
3    int numberOfMatches(int n) {
4      int leftteams ;
5      int matches;
6      int sum = 0;
7      while(n>1){
8        if(n%2 != 0){
9           matches = (n-1)/2;
10           leftteams = n-matches;
11
12           sum += matches;
13           n = leftteams;
14        }
15        else{
16
17            matches = n/2;
18            leftteams = n - matches;
19            sum += matches;
20            n = leftteams;
21        }
22      }  
23      return sum;
24    }
25};