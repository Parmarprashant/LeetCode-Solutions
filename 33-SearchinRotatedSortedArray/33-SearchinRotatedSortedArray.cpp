// Last updated: 24/05/2026, 21:11:38
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int start = 0;
5        int end = nums.size() - 1;
6
7        while (start <= end) {
8            int mid = start + (end - start) / 2;
9
10            if (nums[mid] == target)
11                return mid;
12            if (nums[start] <= nums[mid]) {
13                if (target >= nums[start] && target < nums[mid]) {
14                    end = mid - 1;
15                } else {
16                    start = mid + 1;
17                }
18            }
19            else {
20                if (target > nums[mid] && target <= nums[end]) {
21                    start = mid + 1;
22                } else {
23                    end = mid - 1;
24                }
25            }
26        }
27
28        return -1;
29    }
30};