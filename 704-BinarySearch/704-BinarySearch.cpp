// Last updated: 07/06/2026, 14:15:10
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4     int start = 0;
5     int end = nums.size()-1;
6     int mid = start + (end - start)/2;
7     while(start<=end){
8        if(nums[mid] == target){
9            return mid;
10
11        }
12        else if(nums[mid]> target){
13            end = mid -1;
14        }
15        else{
16            start = mid + 1;
17        }
18
19        mid = start + (end - start)/2;
20     }
21     
22
23     return -1;
24    }
25};