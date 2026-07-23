// Last updated: 23/07/2026, 13:24:05
1class Solution {
2public:
3    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
4      vector<int> sorted = candies;
5      sort(sorted.begin(), sorted.end());
6      int main = sorted.back();
7      vector<bool> s;
8      int check;
9      
10      for(int i = 0; i<candies.size(); i++){
11         check = extraCandies + candies[i];
12
13         if(check>=main){
14            s.push_back(true);
15         }
16         else{
17            s.push_back(false);
18         }
19      }
20
21      return s;
22    }
23};