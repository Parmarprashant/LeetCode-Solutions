// Last updated: 09/05/2026, 00:56:56
1// The API isBadVersion is defined for you.
2// bool isBadVersion(int version);
3
4class Solution {
5public:
6    int firstBadVersion(int n) {
7
8       int start = 1;
9       int end = n;
10       int mid = start + (end - start)/2;
11
12       while(start <= end){
13
14            bool res = isBadVersion(mid);
15
16            if(res == true){
17                end = mid - 1;
18            }
19            else{
20                start = mid + 1;
21            }
22
23            mid = start + (end - start)/2;
24       } 
25
26       return start;
27    }
28};