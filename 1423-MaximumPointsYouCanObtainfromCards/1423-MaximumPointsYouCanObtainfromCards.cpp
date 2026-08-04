// Last updated: 04/08/2026, 11:58:59
1class Solution {
2public:
3    int maxScore(vector<int>& cardPoints, int k) {
4        int lSum = 0;
5        int rSum = 0;
6        int maxSum = 0;
7        int n = cardPoints.size();
8
9        for(int i = 0; i<k; i++){
10            lSum +=cardPoints[i];
11            maxSum = lSum;
12        }
13        int rightIndex = n-1;
14        for(int i = k - 1; i>=0; i--){
15           lSum -= cardPoints[i];
16           rSum += cardPoints[rightIndex];
17           rightIndex--;
18
19           maxSum = max(maxSum, lSum + rSum);
20        }
21
22        return maxSum;
23
24
25
26    }
27};