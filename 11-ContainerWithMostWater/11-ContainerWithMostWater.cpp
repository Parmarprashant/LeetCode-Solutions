// Last updated: 16/07/2026, 14:28:53
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left = 0;
5        int right = height.size() - 1;
6        int maxWater = 0;
7
8        while(left < right) {
9
10            int width = right - left;
11            int h = min(height[left], height[right]);
12
13            int area = width * h;
14
15            maxWater = max(maxWater, area);
16
17            // move smaller height pointer
18            if(height[left] < height[right]) {
19                left++;
20            }
21            else {
22                right--;
23            }
24        }
25
26        return maxWater;
27    }
28};