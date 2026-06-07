// Last updated: 07/06/2026, 14:23:15
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int start = 0;
5        int end = nums.size()-1;
6        int mid = start + (end - start)/2;
7        while(start<=end){
8            if(nums[mid] == target){
9               return mid;
10            }
11            else if(nums[mid]>target){
12                end = mid -1;
13            }
14            else{
15                start = mid + 1;
16            }
17
18            mid = start + (end - mid)/2;
19        }
20
21
22        return start;
23    }
24};