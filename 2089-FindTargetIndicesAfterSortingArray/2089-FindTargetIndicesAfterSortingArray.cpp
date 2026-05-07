// Last updated: 08/05/2026, 00:50:34
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4        int start = 0;
5        int end = nums.size()-1;
6        int mid = start + (end - start)/2;
7
8        while(start<=end){
9            if(nums[mid] == target){
10                return mid;
11            }
12            else if(nums[mid]>target){
13                end = mid -1;
14            }
15            else{
16                start = mid +1;
17            }
18   
19   mid = start + (end - start)/2;
20   }
21       return start;    
22        }
23      
24    
25};