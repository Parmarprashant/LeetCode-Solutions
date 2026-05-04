// Last updated: 04/05/2026, 20:41:43
1class Solution {
2public:
3    vector<int> selfDividingNumbers(int left, int right) {
4        vector<int> result;
5
6        for (int i = left; i <= right; i++) {
7            int temp = i;
8            bool valid = true;
9
10            while (temp > 0) {
11                int digit = temp % 10;
12
13                if (digit == 0 || i % digit != 0) {
14                    valid = false;
15                    break;
16                }
17
18                temp /= 10;
19            }
20
21            if (valid) {
22                result.push_back(i);
23            }
24        }
25
26        return result;
27    }
28};