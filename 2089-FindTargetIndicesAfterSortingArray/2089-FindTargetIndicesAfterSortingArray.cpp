// Last updated: 08/05/2026, 00:30:43
1class Solution {
2public:
3    int specialArray(vector<int>& nums) {
4      for(int x = 0; x <= nums.size(); x++){
5
6    int count = 0;
7
8    for(int num : nums){
9        if(num >= x){
10            count++;
11        }
12    }
13
14    if(count == x){
15        return x;
16    }
17}
18
19        return -1;
20    }
21};