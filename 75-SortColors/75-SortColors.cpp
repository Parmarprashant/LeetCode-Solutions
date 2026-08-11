// Last updated: 11/08/2026, 23:24:49
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4     int cnt = 0;
5     int ele;
6     int n = nums.size();
7     for(int i = 0; i<n; i++){
8        if(cnt == 0){
9            cnt = 1;
10            ele = nums[i];
11        }
12        else if(ele == nums[i]){
13            cnt++;
14        }
15        else{
16            cnt--;
17        }
18     }
19       int cnt1 = 0;
20     for(int i = 0; i<n; i++){
21        if(nums[i] == ele){
22            cnt1++;
23        }
24
25        if(cnt1>n/2){
26            return ele;
27        }
28     }
29
30     return -1;
31    }
32};