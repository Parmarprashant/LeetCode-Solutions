// Last updated: 28/07/2026, 08:54:57
1class Solution {
2public:
3    void reverse(vector<int>& nums, int left, int right) {
4        while (left < right) {
5            swap(nums[left], nums[right]);
6            left++;
7            right--;
8        }
9    }
10
11    void rotate(vector<int>& nums, int k) {
12        int n = nums.size();
13        k = k % n;
14
15        
16        reverse(nums, 0, n - 1);
17
18        
19        reverse(nums, 0, k - 1);
20
21        
22        reverse(nums, k, n - 1);
23    }
24};