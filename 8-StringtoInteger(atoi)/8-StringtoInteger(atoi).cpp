// Last updated: 17/08/2026, 17:41:46
1class Solution {
2public:
3    int myAtoi(string s) {
4        int i = 0;
5        int n = s.size();
6
7        while (i < n && s[i] == ' ')
8            i++;
9
10        int sign = 1;
11
12        if (i < n && (s[i] == '+' || s[i] == '-')) {
13            if (s[i] == '-')
14                sign = -1;
15            i++;
16        }
17
18        long long num = 0;
19
20        while (i < n && isdigit(s[i])) {
21            num = num * 10 + (s[i] - '0');
22
23            if (num * sign > INT_MAX)
24                return INT_MAX;
25
26            if (num * sign < INT_MIN)
27                return INT_MIN;
28
29            i++;
30        }
31
32        return num * sign;
33    }
34};