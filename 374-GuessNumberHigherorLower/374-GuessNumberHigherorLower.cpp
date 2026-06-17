// Last updated: 17/06/2026, 21:02:09
1/** 
2 * Forward declaration of guess API.
3 * @param  num   your guess
4 * @return 	     -1 if num is higher than the picked number
5 *			      1 if num is lower than the picked number
6 *               otherwise return 0
7 * int guess(int num);
8 */
9
10class Solution {
11public:
12    int guessNumber(int n) {
13        int low = 1, high = n;
14
15        while(low<=high){
16            int mid = low + (high - low)/2;
17
18            int res = guess(mid);
19
20            if(res == 0) return mid;
21            else if(res == -1) high = mid -1;
22            else low = mid +1;
23        }
24
25        return -1;
26    }
27};