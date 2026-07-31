// Last updated: 31/07/2026, 13:38:26
1class Solution {
2public:
3    vector<int> decrypt(vector<int>& code, int k) {
4        vector<int> ans(code.size(), 0);
5        int n = code.size();
6
7        if(k==0) return ans;
8
9        for(int i = 0; i<n; i++){
10            int sum = 0;
11
12           if(k>0){
13             for(int j = 1; j<=k; j++){
14                sum += code[(i+j)%n];
15            }
16           }
17           else{
18            for(int j = 1; j<=-k; j++){
19                sum += code[(i-j+n)%n];
20            }
21           }
22
23           ans[i] = sum;
24            
25            
26        }
27
28        return ans;
29    }
30};