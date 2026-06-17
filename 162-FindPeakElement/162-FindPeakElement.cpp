// Last updated: 17/06/2026, 20:56:25
1class Solution {
2public:
3    int findPeakElement(vector<int>& nums) {
4        int n = nums.size();
5        if(n==1) return 0;
6
7
8        for(int i= 0; i<n; i++){
9            bool left = (i==0 || nums[i]>nums[i-1]);
10            bool right = (i == n-1 || nums[i]> nums[i+1]);
11
12            if(left && right){
13                return i;
14            }
15        }
16
17        return -1;
18    }
19};