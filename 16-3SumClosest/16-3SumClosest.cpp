// Last updated: 28/07/2026, 17:08:33
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5        int near = nums[0] + nums[1] + nums[2];
6        int n = nums.size();
7        for(int i = 0; i<n-2; i++){
8            int left = i+1;
9            int right = n-1;
10
11            while(left<right){
12                int sum = nums[i] + nums[left] + nums[right];
13                
14                if(abs(sum-target)<abs(near - target)){
15                    near = sum;
16                }
17
18
19                if(sum == target){
20                    return sum;
21                }
22                else if(sum<target){
23                    left++;
24                }
25                else{
26                    right--;
27                }
28            }
29
30           
31        }
32         return near;
33    }
34};