// Last updated: 11/08/2026, 23:25:44
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        //moore's voting algo
5     int cnt = 0;
6     int ele;
7     int n = nums.size();
8     for(int i = 0; i<n; i++){
9        if(cnt == 0){
10            cnt = 1;
11            ele = nums[i];
12        }
13        else if(ele == nums[i]){
14            cnt++;
15        }
16        else{
17            cnt--;
18        }
19     }
20       int cnt1 = 0;
21     for(int i = 0; i<n; i++){
22        if(nums[i] == ele){
23            cnt1++;
24        }
25
26        if(cnt1>n/2){
27            return ele;
28        }
29     }
30
31     return -1;
32    }
33};