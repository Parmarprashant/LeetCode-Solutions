// Last updated: 24/04/2026, 10:05:06
class Solution {
public:
   bool uniqueOccurrences(vector<int>& arr) {
    unordered_map<int, int> freq;   

    for(int x: arr){
        freq[x]++;
    }

    unordered_set<int> s;

    for(auto it: freq){
        if(s.count(it.second)){
            return false;
        }
        s.insert(it.second);
    }

    return true;
}
};