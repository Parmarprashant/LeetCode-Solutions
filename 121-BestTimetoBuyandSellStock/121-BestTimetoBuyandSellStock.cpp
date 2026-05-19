// Last updated: 19/05/2026, 20:11:38
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minimum = prices[0];
5        int profit = 0;
6        int cost;
7        for(int i = 1; i<prices.size(); i++){
8            cost = prices[i] - minimum;
9            profit = max(profit, cost);
10            minimum = min(minimum, prices[i]);
11        }
12
13        return profit;
14    }
15};