// Last updated: 23/07/2026, 13:35:18
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4     int max_ele = *max_element(candies.begin(), candies.end());
5      vector<bool> s(candies.size(), false);
6      int check;
7      
8      for(int i = 0; i<candies.size(); i++){
9         check = extraCandies + candies[i];
10
11         if(check>=max_ele){
12            s[i]= true;
13         }
14
15      }
16
17      return s;
18    }
19};