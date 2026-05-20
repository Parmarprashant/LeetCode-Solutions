// Last updated: 20/05/2026, 17:50:27
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4      int mini = prices[0];
5      int profit = 0;
6      int cost;
7      for(int i = 1; i<prices.size(); i++){
8        cost = prices[i] - mini;
9        profit = max(profit, cost);
10        mini = min(mini, prices[i]);
11
12
13
14      }
15
16      return profit;
17    }
18};