// Last updated: 09/05/2026, 00:48:30
1/**
2 * Forward declaration of guess API.
3 * int guess(int num);
4 */
5
6class Solution {
7public:
8    int guessNumber(int n) {
9
10        int start = 1;
11        int end = n;
12
13        while(start <= end){
14
15            int mid = start + (end - start)/2;
16
17            int result = guess(mid);
18
19            if(result == 0){
20                return mid;
21            }
22
23            else if(result == -1){
24                end = mid - 1;
25            }
26
27            else{
28                start = mid + 1;
29            }
30        }
31
32        return -1;
33    }
34};