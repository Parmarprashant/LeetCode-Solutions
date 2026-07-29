// Last updated: 29/07/2026, 21:45:29
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        // for(int i = 0; i<numbers.size(); i++){
5        //     for(int j = i + 1; j<numbers.size(); j++){
6        //         if((numbers[i] + numbers[j]) == target){
7        //             return {i+1,j+1};
8        //         }
9        //     }
10        // }
11        // return {};
12
13
14        int i = 0;
15        int j = numbers.size()-1;
16
17        while(i<j){
18            if((numbers[i] + numbers[j]) == target){
19                return {i +1, j+1};
20            }
21            else if((numbers[i] + numbers[j]) < target){
22                i++;
23            }
24
25            else if((numbers[i] + numbers[j]) > target){
26                j--;
27            }
28
29        }
30
31        return {};
32    }
33};