// Last updated: 23/07/2026, 13:33:20
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4     int max_ele = *max_element(candies.begin(), candies.end());
5      vector<bool> s;
6      int check;
7      
8      for(int i = 0; i<candies.size(); i++){
9         check = extraCandies + candies[i];
10
11         if(check>=max_ele){
12            s.push_back(true);
13         }
14         else{
15            s.push_back(false);
16         }
17      }
18
19      return s;
20    }
21};