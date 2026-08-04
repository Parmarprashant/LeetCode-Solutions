// Last updated: 04/08/2026, 23:21:52
1class Solution {
2public:
3    double findMaxAverage(vector<int>& nums, int k) {
4        int low = 0;
5        int high = k -1;
6        int sum = 0;
7        // int maxx = 0;
8        int n = nums.size();
9        int avg;
10        for(int i = 0; i<k; i++){
11            sum += nums[i];
12           
13        }
14        int maxx = sum;
15
16        while(high<n-1){
17            sum -= nums[low];
18            low++;
19            high++;
20
21            sum += nums[high];
22
23            maxx = max(maxx, sum);
24        }
25
26   return (double)maxx/k;;
27
28    }
29};