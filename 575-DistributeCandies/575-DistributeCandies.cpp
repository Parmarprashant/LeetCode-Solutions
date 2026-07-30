// Last updated: 30/07/2026, 09:14:58
1class Solution {
2public:
3    int distributeCandies(vector<int>& candyType) {
4        set<int> freq;
5        int n = candyType.size();
6        for(int x: candyType){
7            freq.insert(x);
8        }
9
10        if(freq.size()>n/2){
11            return n/2;        
12            }
13            else{
14                return freq.size();
15            }
16
17
18
19        //total distinct elemtns 
20        ///distinct > n/2 return n/2
21    }
22};