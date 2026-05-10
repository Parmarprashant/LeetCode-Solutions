// Last updated: 10/05/2026, 21:45:37
1class Solution {
2public:
3    int singleNonDuplicate(vector<int>& nums) {
4        int start = 0;
5        int end = nums.size() - 1;
6
7        while(start < end){
8            int mid = start + (end - start)/2;
9
10           
11            if(mid % 2 == 1){
12                mid--;
13            }
14
15            if(nums[mid] == nums[mid + 1]){
16                start = mid + 2;
17            }
18            else{
19                end = mid;
20            }
21        }
22
23        return nums[start];
24    }
25};