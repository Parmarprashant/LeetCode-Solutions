// Last updated: 09/05/2026, 12:22:40
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4
5        int start = 0;
6        int end = nums.size() - 1;
7
8        while(start < end){
9
10            int mid = start + (end - start)/2;
11
12            if(nums[mid] > nums[end]){
13                start = mid + 1;
14            }
15            else{
16                end = mid;
17            }
18        }
19
20        return nums[start];
21    }
22};