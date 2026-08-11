// Last updated: 11/08/2026, 17:50:42
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4    int low = 0;
5    int mid = 0;
6    int high = nums.size()-1;
7    while(mid<=high){
8        if(nums[mid] == 0){
9            swap(nums[mid], nums[low]);
10            low++;
11            mid++;
12        }
13        else if(nums[mid] == 1){
14            mid++;
15        }
16        else{
17            swap(nums[mid], nums[high]);
18            high--;
19        }
20    }
21    }
22};