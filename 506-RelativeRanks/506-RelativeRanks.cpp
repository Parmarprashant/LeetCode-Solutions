// Last updated: 23/05/2026, 22:35:11
1class Solution {
2public:
3    vector<string> findRelativeRanks(vector<int>& score) {
4        
5        int n = score.size();
6        vector<int> sorted = score;
7        
8        sort(sorted.begin(), sorted.end(), greater<int>());
9        
10        unordered_map<int, int> rank;
11
12        for(int i = 0; i < n; i++){
13            rank[sorted[i]] = i + 1;
14        }
15
16        vector<string> res(n);
17
18        for(int i = 0; i < n; i++){
19            int r = rank[score[i]];
20
21            if(r == 1)
22                res[i] = "Gold Medal";
23            else if(r == 2)
24                res[i] = "Silver Medal";
25            else if(r == 3)
26                res[i] = "Bronze Medal";
27            else
28                res[i] = to_string(r);
29        }
30
31        return res;
32    }
33};